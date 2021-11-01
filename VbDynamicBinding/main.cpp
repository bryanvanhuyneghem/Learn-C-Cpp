// VbDynamicBinding_bis.cpp

// <<-operator werkt nu prima, aangezien deze
// de private/protected virtuele methode schrijf oproept

#include <iostream>
using namespace std;

// ----------------
// Persoon

class Persoon {
private:
    string naam;
protected:
    virtual void print(ostream &) const;
public:
    Persoon(const string &nm="");
    friend ostream& operator<<(ostream&, const Persoon&); // friend

};  // Persoon

Persoon::Persoon(const string &nm) : naam(nm) {}

void Persoon::print(ostream & os) const {
    os<<naam;
}

ostream& operator<<(ostream& os, const Persoon &p) {
    p.print(os);
    return os;
} // wil gewoon zeggen dat wanneer je bv.  cout << p
  // schrijft, dat de operator << de print-methode zal oproepen.
  // Je kan dus meteen het object uitschrijven zoals je zelf wil.

// ----------------
// Student

class Student : public Persoon {
private:
    string klascode;
    void print(ostream &) const;
public:
    Student(const string &nm="", const string &kl="");
};  // Student

Student::Student(const string &nm, const string &kl) :
        Persoon(nm),klascode(kl) {}

void Student::print(ostream &os) const {
    Persoon::print(os); // zal de naam uitschrijven
    os<< " zit in klas " << klascode;
}

// ----------------
//  Leerkracht

class Leerkracht : public Persoon {
private:
    string vakgroep;
    virtual void print(ostream &) const;
public:
    Leerkracht(const string &nm="", const string &vg="");
};  // Leerkracht

Leerkracht::Leerkracht(const string &nm, const string &vg) :
        Persoon(nm),vakgroep(vg) {}

void Leerkracht::print(ostream &os) const {
    Persoon::print(os);
    os << " uit vakgroep " <<vakgroep;
}


// ----------------
// Main

int main() {
    Persoon p("Leo");
    cout << p << endl;
    Student s("Jan","1Ba3");
    cout << s << endl;
    Leerkracht l("Marc","EA20");
    cout << l << endl;

    cout << "p = l;" << endl;
    p = l;
    cout << p << endl;

    // Nu met pointers werken

    cout << "Persoon *pps=&s, *ppl=&l;" << endl;
    Persoon *pps=&s, *ppl=&l;
    cout << *pps << endl;
    cout << *ppl << endl;

    cout << "Persoon *ppl2 = new Leerkracht(\"Els\",\"Talen\");" << endl;
    Persoon *ppl2 = new Leerkracht("Els","Talen");
    cout << *ppl2 << endl;
    delete ppl2;

    return 0;
}

// OUTPUT

/*
Leo
Jan zit in klas 1Ba3
Marc uit vakgroep EA20
p = l;
Marc
Persoon *pps=&s, *ppl=&l;
Jan zit in klas 1Ba3
Marc uit vakgroep EA20
Persoon *ppl2 = new Leerkracht("Els","Talen");
Els uit vakgroep Talen
 */