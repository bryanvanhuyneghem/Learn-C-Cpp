#include <iostream>
#include <vector>

template<typename T>
std::ostream& operator << (std::ostream& out, const std::vector<T>& v){
    out << std::endl << "[ ";
    for(int i = 0; i < v.size()-1; i++){
        out << v[i] << " - ";
    }
    out << v[v.size()-1] << " ]" << std::endl;
    return out;
}

template<typename T>
class mijn_vector : public std::vector<T> {
    using std::vector<T>::vector; // constructoren gebruiken

    public:
        void verdubbel(bool herhaal_elk_element = false);
};

template<typename T>
void mijn_vector<T>::verdubbel(bool herhaal_elk_element){
    if(herhaal_elk_element){ // a b c wordt a a b b c c
        int lengte = this->size();
        this->resize(2*lengte);
        for(int i =  this->size()-1; i > 0; i-=2){
            *(this)[i] = (*this)[i/2];
            *(this)[i-1] = (*this)[i/2];
        }
    } else  { // a b c wordt 2a 2b 2c
        for(int i = 0; i < this->size(); i++){
            (*this)[i] = 2*(*this)[i];
        }
    }
}

int main(){
    mijn_vector v{10,20,30};  
    std::cout << v;

    v.verdubbel();              
    std::cout <<  std::endl << "na verdubbelen zonder parameter: " << v;
    v.verdubbel(true);
    std::cout <<  std::endl << "na verdubbelen met param true:   " << v;

    mijn_vector w(v);
    std::cout <<  std::endl << "een kopie van v: " << w;

    mijn_vector u(7);
    std::cout <<  std::endl << "een vector met 7 default-elt: " << u;
    for(int i=0; i < u.size(); i++){
        u[i] = i*1.1;
    }
    std::cout <<  std::endl << "na opvullen met getallen: " << u;

    u.verdubbel();
    std::cout <<  std::endl << "na verdubbelen zonder parameter: " << u;
   
    return 0;
}