#include <iostream>
using namespace std;

class A {
private:
    int i;
    friend int test(const A &); // friend functie declaratie
public:
    A(int _i=0):i(_i) {}
    int get_i() const;
    friend int g(const A &); // friend functia declaratie
};

int A::get_i() const {
    return i;
}

// friend-functie implementatie (géén friend keywoord herhalen!)
int g(const A &a) {
    return a.i;
}

int test(const A &a){
    return a.get_i();
}

int main() {
    A a(7);
    cout << a.get_i() << "  " << g(a) << "  " << test(a); // friend methode laat toe om aan private elementen te geraken
                                                          // door vriendobject mee te geven als parameter.
    return 0;
}