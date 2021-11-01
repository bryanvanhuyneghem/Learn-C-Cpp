//
// Created by Bryan on 13/08/2018.
//
#include <iostream>
using namespace std;


class MyClass {
private:
    int i;

public:
    MyClass(int i);
    ~MyClass() {
        cout << "Destructor object " << i << endl;
    }
};

MyClass::MyClass(int i) {
    cout << "Constructor object " << i << endl;
    this->i = i;
}
