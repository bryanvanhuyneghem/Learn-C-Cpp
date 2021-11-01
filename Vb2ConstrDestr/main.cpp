#include <iostream>
#include "MyClass.cpp"
using namespace std;

int main() {
    // -------------- voor Stack-voorbeeld -----------------
    MyClass a(1);
    for (int i=2 ; i<4 ; i++) {
        MyClass b(i);
    }
    int k = 0;
    for (MyClass c(4); k<2 ; k++) {
        cout << k << endl;
    } // object 4 wordt bij beëindigen van
    cout << "end of program" << endl;


    // --------------- voor Heap-voorbeeld -----------------
    /*
    MyClass* a = new MyClass(1);
    for (int i=2 ; i<4 ; i++) {
        MyClass *b = new MyClass(i);
    }
    delete a;
    cout << "end of program" << endl;
    */

    return 0;
}
