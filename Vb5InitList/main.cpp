#include "Punt.cpp"
#include "Lijn1.cpp"
#include "Lijn2.cpp"
#include <iostream>
using namespace std;

int main() {
    cout << "Lijn1 l1;" << endl;
    Lijn1 l1;
    cout << "print l1: ";
    l1.print();
    cout << endl;

    cout << "Lijn2 l2;" << endl;
    Lijn2 l2;
    cout << "print l2: ";
    l2.print();
    cout << endl;

    cout << "Lijn1 l3(1,2,3,4);" << endl;
    Lijn1 l3(1,2,3,4);
    cout << "print l3: ";
    l3.print();
    cout << endl;

    cout << "Lijn2 l4(1,2,3,4);" << endl;
    Lijn2 l4(1,2,3,4);
    cout << "print l4: ";
    l4.print();
    cout << endl;

    cout << "Punt p1(5,6), p2(7,8);" << endl;
    Punt p1(5,6), p2(7,8);

    cout << "Lijn1 l5(p1,p2);" << endl;
    Lijn1 l5(p1,p2);
    cout << "print l5: ";
    l5.print();
    cout << endl;

    cout << "Lijn2 l6(p1,p2);" << endl;
    Lijn2 l6(p1,p2);
    cout << "print l6: ";
    l6.print();
    return 0;
}

// OUTPUT
/*
Lijn1 l1;
default constructor Punt
default constructor Punt
default constructor Lijn1
print l1: [(0,0)-(0,0)]
Lijn2 l2;
default constructor Punt
default constructor Punt
default constructor Lijn2
print l2: [(0,0)-(0,0)]
Lijn1 l3(1,2,3,4);
default constructor Punt
default constructor Punt
constructor Lijn1: 4 int
constructor Punt 2 int
constructor Punt 2 int
print l3: [(1,2)-(3,4)]
Lijn2 l4(1,2,3,4);
constructor Punt 2 int
constructor Punt 2 int
constructor Lijn2: 4 int
print l4: [(1,2)-(3,4)]
Punt p1(5,6), p2(7,8);
constructor Punt 2 int
constructor Punt 2 int
Lijn1 l5(p1,p2);
default constructor Punt
default constructor Punt
constructor Lijn1: 2 punten
print l5: [(5,6)-(7,8)]
Lijn2 l6(p1,p2);
copyconstructor Punt 2
copyconstructor Punt 2
constructor Lijn2: 2 punten
print l6: [(5,6)-(7,8)]
 */
