#include <iostream>
#include <vector>
#include <memory>

template<typename T>
class Doos {
public:
    Doos();
    Doos(const Doos<T>&);
    Doos<T>& operator=(const Doos<T>&);
    virtual ~Doos(); // destructor steeds virtual maken!!
    // extra:
    Doos(Doos<T>&&); // move constructor
    Doos<T>& operator=(Doos&&); // move operator
private:
    std::vector<T> b;
    int n;
    Doos<T>* c;
    std::unique_ptr<std::string>* d;
    void copy(const Doos<T>&); //vermijd duplicated code
    void move(Doos<T> &&); // vermijd duplicated code
};

template<typename T>
class Schijf {
public:
    Schijf();
    Schijf(const Schijf<T>&);
    Schijf<T>& operator=(const Schijf<T>&);
    virtual ~Schijf(); // destructor steeds virtual maken!!
    // extra:
    Schijf(Schijf<T>&&); // move constructor
    Schijf<T>& operator=(Schijf<T>&&); // move operator
private:
    Doos<T>* a;
};

/******************************* SCHIJF *****************************/

template<typename T>
Schijf<T>::Schijf() : a(nullptr) {}

template<typename T>
Schijf<T>::Schijf(const Schijf<T>& schijf){
    if(schijf.a) { // geen nullptr
        a = new Doos<T>(*schijf.a);
    } else {
        a = nullptr;
    }
}

template<typename T>
Schijf<T>::~Schijf(){
    delete a;
}

template<typename T>
Schijf<T>& Schijf<T>::operator=(const Schijf<T>& schijf){
    if (this != &schijf){
        delete a;
        a = nullptr;
        if(schijf.a != nullptr){
            a = new Doos<T>(*schijf.a);
        }
    }
    return *this;
}

// extra: move constructor
template<typename T>
Schijf<T>::Schijf(Schijf<T>&& schijf) : a(schijf.a) {
    schijf.a = nullptr;
}

// extra: move operator
template<typename T>
Schijf<T>& Schijf<T>::operator=(Schijf<T>&& schijf){
    if(this != &schijf){
        delete a;
        a = schijf.a;
        schijf.a = nullptr;
    }
    return *this;
}

/********************************* DOOS **************************/

template<typename T>
Doos<T>::Doos() : n(0) , c(nullptr), d(nullptr) {}

template<typename T>
void Doos<T>::copy(const Doos<T>& doos){
    b = doos.b; // vector kopiëren
    if(doos.c) {
        c = new Doos<T>(*doos.c);
    } else {
        c = nullptr;
    }
    n = doos.n;
    if(n > 0){
        d = new std::unique_ptr<std::string>[n]; // n elementen in de array
        for(int i = 0; i < n; i++){
            if(doos.d[i]){
                d[i] = std::make_unique<std::string>(*doos.d[i]);
            } else {
                d[i] = nullptr;
            }
        }
    } else {
        d = nullptr;
    }
}

template<typename T>
Doos<T>::Doos(const Doos<T>& doos){
    copy(doos);
}

template<typename T>
Doos<T>& Doos<T>::operator=(const Doos<T>& doos){
    if(this != &doos){
        delete c;
        delete[] d;
        copy(doos);
    }
    return *this;
}

// move functie om duplicated code te vermijden
template<typename T>
void Doos<T>::move(Doos<T>&& doos) {
    b = move(doos.b);
    c = doos.c;
    n = doos.n;
    d = doos.d;

    doos.n = 0;
    doos.c = nullptr;
    doos.d = nullptr;
}

// extra: move constructor
template<typename T>
Doos<T>::Doos(Doos<T>&& doos) {
    move(doos);
}

// extra: move operator
template<typename T>
Doos<T>& Doos<T>::operator=(Doos<T>&& doos) {
    if(this != &doos){
        delete c;
        delete[] b;
        move(doos);
    }
    return *this;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
