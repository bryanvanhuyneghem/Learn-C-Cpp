/* Tijd2.cpp
	uitbreiding van de klasse Tijd uit Tijd1.cpp
	met de extra definitie van
    	unaire operator -
        operator += 
		prefix en postfix operator ++                       
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Tijd {
private:
    int uur, min, sec;
    void herbereken();
public:
    Tijd(int u=0, int m=0, int s=0) :
            uur(u), min(m), sec(s) {}
    void print(bool s=true) const;
    Tijd operator+(const Tijd &t) const;
    Tijd operator*(int f) const;
    bool operator<(const Tijd &t) const;
    Tijd operator-() const;
    Tijd& operator+=(const Tijd &t);
    Tijd& operator++();
    Tijd operator++(int);
}; // Tijd

void Tijd::herbereken() {
    int hulp = sec;
    sec = hulp % 60;
    hulp = min + hulp/60;
    min = hulp % 60;
    uur = (uur + hulp/60) % 24;
}

void Tijd::print(bool s) const {
    cout << setw(2) << setfill('0') << uur << ':'
         << setw(2) << setfill('0') << min;
    if (s)
        cout << ':' << setw(2) << setfill('0') << sec;
}

Tijd Tijd::operator+(const Tijd &t) const {
    Tijd som(uur+t.uur, min+t.min, sec+t.sec);
    som.herbereken();
    return som;
}

Tijd Tijd::operator*(int factor) const {
    Tijd tmp(uur*factor, min*factor, sec*factor);
    tmp.herbereken();
    return tmp;
}

bool Tijd::operator<(const Tijd &t) const {
    return uur*3600+min*60+sec <
           t.uur*3600+t.min*60+t.sec;
}

// nieuw
Tijd Tijd::operator-() const {
    return Tijd(-uur, -min, -sec);
}

// nieuw; overloaden van toekenningsoperatoren by reference returnen!
Tijd& Tijd::operator+=(const Tijd &t) {
    sec += t.sec; min += t.min; uur += t.uur;
    herbereken();
    return *this;
}

// nieuw overloaden van prefix-operatoren by reference returnen
Tijd& Tijd::operator++() {
    sec++; herbereken();
    return *this;
}

// nieuw overloaden van postfix-operatoren: kopie nodig van vorige staat van object (via *this en copy-constructor)
Tijd Tijd::operator++(int a) {
    Tijd temp(*this); // object van zelfde type aanmaken via copy-constructor met *this als parameter
    sec++; herbereken();
    return temp; // nieuw object returnen
}

int main() {
    Tijd t0, t1(1,30,11), t2(5,45,51), t3;
    cout << endl << "t1: ";
    t1.print();
    cout << endl << "t2: ";
    t2.print();
    t1 = -t1;
    cout << endl << "t1 (=-t1): ";
    t1.print();
    t1 += t2;
    cout << endl << "t1 (+=t2): ";
    t1.print();
    t1++;
    cout << endl << "t1 (na t1++;): ";
    t1.print();
    ++t1;
    cout << endl << "t1 (na ++t1;): ";
    t1.print();
    t3 = t1++;
    cout << endl << "t3 = t1++;" << endl << "t1: ";
    t1.print();
    cout << endl << "t3: ";
    t3.print();
    t3 = ++t1;
    cout << endl << "t3 = ++t1;" << endl << "t1: ";
    t1.print();
    cout << endl << "t3: ";
    t3.print();
    return 0;
}

// OUTPUT

/*
t1: 01:30:11
t2: 05:45:51
t1 (=-t1): -1:-30:-11
t1 (+=t2): 04:15:40
t1 (na t1++;): 04:15:41
t1 (na ++t1;): 04:15:42
t3 = t1++;
t1: 04:15:43
t3: 04:15:42
t3 = ++t1;
t1: 04:15:44
t3: 04:15:44
 */
