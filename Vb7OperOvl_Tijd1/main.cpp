/* Tijd1.cpp
	met de definitie van
                        operator +
                        operator <
                        operator * : tijd * int
	met een private lidfunctie om de tijd te herschikken,
    toegepast in de operatoren die hiervoor staan vermeld
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Tijd {
private:
    int uur, min, sec;
    void herbereken(); // tijd herschikken
public:
    Tijd(int u=0, int m=0, int s=0);
    void print(bool s=true) const;
    Tijd operator+(const Tijd &) const; // operator ovl
    Tijd operator*(int) const; // operator ovl
    bool operator<(const Tijd &) const; // operator ovl
}; // Tijd

// Herberekenen van de tijd door getallen hoger dan 60 bij min en sec door te geven via %
void Tijd::herbereken() {
    int hulp = sec;
    sec = hulp % 60;
    hulp = min + hulp/60;
    min = hulp % 60;
    uur = (uur + hulp/60) % 24;
}

// Constructor met initializer list
Tijd::Tijd(int u, int m, int s) :
        uur(u), min(m), sec(s) {}

// printen
void Tijd::print(bool s) const {
    cout << setw(2) << setfill('0') << uur << ':'
         << setw(2) << setfill('0') << min;
    if (s)
        cout << ':' << setw(2) << setfill('0') << sec;
}

// Wat moeten deze operatoren precies bij elkaar doen? i.e. wat moet bij wat opgeteld worden etc.
// Hergedefinieerde operator +    uur bij uur, min bij min en sec bij sec en dan herberekenen
Tijd Tijd::operator+(const Tijd &t) const {
    Tijd som(uur+t.uur, min+t.min, sec+t.sec);
    som.herbereken();
    return som;
}

// Hergedefinieerde operator *    alles maal de factor en dan herberekenen
Tijd Tijd::operator*(int factor) const {
    Tijd tmp(uur*factor, min*factor, sec*factor);
    tmp.herbereken();
    return tmp;
}

// Hergedefinieerde operator <    alles naar seconden en dan vergelijken
bool Tijd::operator<(const Tijd &t) const {
    return uur*3600+min*60+sec <
           t.uur*3600+t.min*60+t.sec;
}

int main() {
    Tijd t0, t1(1,51,51), t2(5,30,11), t3;
    cout << "t0: ";
    t0.print(false);
    cout << endl << "t1: ";
    t1.print();
    cout << endl << "t2: ";
    t2.print();
    t0 = t1+t2;
    cout << endl << "t0 (=t1+t2): ";
    t0.print();
    t3 = t2*2;
    cout << endl << "t3 (=t2*2): ";
    t3.print();
    if (t1<t2)
        cout << endl << "t1 < t2";
    return 0;
}

// OUTPUT
/*
t0: 00:00
t1: 01:51:51
t2: 05:30:11
t0 (=t1+t2): 07:22:02
t3 (=t2*2): 11:00:22
t1 < t2
 */