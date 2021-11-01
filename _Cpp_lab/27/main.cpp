#include <memory>
#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class Langeslang : public vector<unique_ptr<int>>{
    private:
        void schrijf(ostream&)const;
    public:
        void vul(const vector<T>& v);
        Langeslang<T>& concatenate(Langeslang<T> & c);

    friend ostream& operator << (ostream& out, const Langeslang<T>& l){
        l.schrijf(out);
        return out;
    }
};

template<typename T>
void Langeslang<T>::schrijf(ostream& out) const {
    for(int i = 0; i < this->size(); i++){
        out << *(operator[](i)) << " ";
    }
}

template<typename T>
Langeslang<T>& Langeslang<T>::concatenate(Langeslang<T>& c) {
    this->reserve(c.size() + this->size());
    if(this != &c){
        for(int i = 0; i < c.size(); i++){
            (*this).push_back(move(c[i]));
        }
        c.clear();
    } else {
        int aantal = this->size();
        for(int i = 0; i < aantal; i++){
            (*this).push_back(make_unique<T>(*c[i]));
        }
    }
    return *this;
}

template<typename T>
void Langeslang<T>::vul(const vector<T>& v){
    this->reserve(v.size());
    for(int i = 0; i < v.size(); i++){
        (*this).push_back(make_unique<T>(v[i]));
    }
}

int main(){
    Langeslang<int> a;
    Langeslang<int> b;
    Langeslang<int> c;
    a.vul({1,2});      // via a vind je de getallen 1 en 2
    b.vul({3,4,5});    // via b vind je de getallen 3, 4 en 5
    c.vul({6,7});      // via c vind je de getallen 6 en 7
    cout << "a: " << a << endl << "b: " << b << endl << "c: " << c << endl << endl;

    a.concatenate(a);
    // via a vind je nu de 4 getallen 1, 2, 1 en 2

    cout << "na a.concatenate(a)" << endl;
    cout << "a: " << a << endl << "b: " << b << endl << "c: " << c << endl << endl;

    a.concatenate(b).concatenate(c);
    // via a vind je nu de 9 getallen 1, 2, 1, 2, 3, 4, 5, 6 en 7
    // b is leeg
    // c is leeg

    cout << "na a.concatenate(b).concatenate(c)" << endl;
    cout << "a: " << a << endl << "b: " << b << endl << "c: " << c << endl << endl;
    return 0;
}