// DemoDestructor2.cpp
// virtuele destructor

#include <iostream>
using namespace std;

class Basis {
protected:
    int i;
public:
    Basis(int _i) : i(_i) {
        cout<<"constructor van basis "<< i << endl;
    }
    virtual ~Basis() { // virtual destructor
        cout<<"destructor van basis "<< i << endl;
    }
};

class Afgeleid : public Basis {
public:
    Afgeleid(int i) : Basis(i) {
        cout<<"constructor van afgeleid " << i << endl;
    }
    virtual ~Afgeleid() { //
        cout<<"destructor van afgeleid " << i << endl;
    }
};

int main() {
    Basis b1(1);
    cout << "------" << endl;
    Afgeleid a(2);
    cout << "------" << endl;

    Basis *b2 = new Basis(3);
    cout << "------" << endl;
    delete b2;
    cout << "------" << endl;

    Basis *b3 = new Afgeleid(4);
    cout << "------" << endl;
    delete b3;

    cout << "------" << endl;

    return 0;
}

// OUTPUT

/*
constructor van basis 1
------
constructor van basis 2
constructor van afgeleid 2
------
constructor van basis 3
------
destructor van basis 3
------
constructor van basis 4
constructor van afgeleid 4
------
destructor van afgeleid 4
destructor van basis 4
------
destructor van afgeleid 2
destructor van basis 2
destructor van basis 1
 */