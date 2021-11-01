// VbPolymorfisme.cpp
// een voorbeeld van twee klassen afgeleid van klasse persoon
// polymorfisme

#include <iostream>
#include <string>
using namespace std;

class Persoon {
protected:
    string naam;
public:
    Persoon(const string &nm="");
    void print(bool nl=false) const;
    friend ostream& operator<<(ostream&, const Persoon &);
};  // Persoon

class Student : public Persoon {
private:
    string klascode;
public:
    Student(const string &nm="", const string &kl="");
    void print(bool nl=true) const;
    friend ostream& operator<<(ostream&,const Student &);
};  // Student

class Leerkracht : public Persoon {
private:
    string vakgroep;
public:
    Leerkracht(const string &nm="", const string &vg="");
    void print(bool nl=true) const;
    friend ostream& operator<<(ostream&,const Leerkracht &);
};  // Leerkracht

Persoon::Persoon(const string &nm) : naam(nm) {}

void Persoon::print(bool nl) const {
    cout<<naam;
    if (nl) cout<<endl;
    else cout<<" ";
}

ostream& operator<<(ostream& os,const Persoon &p) {
    os << p.naam;
    return os;
}

Student::Student(const string &nm, const string &kl) :
        Persoon(nm),klascode(kl) {}

void Student::print(bool nl) const {
    Persoon::print();
    cout<<"zit in klas "<<klascode;
    if (nl) cout<<endl;
    else cout<<" ";
}

ostream& operator<<(ostream& os,const Student &st) {
    os<<st.naam<<" zit in klas "<<st.klascode;
    return os;
}

Leerkracht::Leerkracht(const string &nm, const string &vg) :
        Persoon(nm),vakgroep(vg) {}

void Leerkracht::print(bool nl) const {
    Persoon::print();
    cout<<"uit vakgroep "<<vakgroep;
    if (nl) cout<<endl;
    else cout<<" ";
}

ostream& operator<<(ostream& os,const Leerkracht &l) {
    os<<l.naam<<" uit vakgroep "<<l.vakgroep;
    return os;
}

int main() {
    Persoon p("Leo");
    p.print(true);
    cout << p << endl;

    Student s("Jan","1Ba3");
    s.print();
    cout << s << endl;
    Leerkracht l("Marc","EA20");
    l.print();
    cout << l << endl;

    cout << "p = l;" << endl;
    p = l;
    p.print(true);
    cout << p << endl;

    //fout:
    //s = p;
    //s = (Student)p;

    cout << "Persoon *pps=&s, *ppl=&l;" << endl;
    Persoon *pps=&s, *ppl=&l;
    pps->print(true);
    cout << *pps << endl;
    (*ppl).print(true);
    cout << *ppl << endl;

    cout << "Persoon *ppl2 = new Leerkracht(\"Els\",\"Talen\");" << endl;
    Persoon *ppl2 = new Leerkracht("Els","Talen");
    ppl2->print(true);
    cout << *ppl2 << endl;
    delete ppl2;

    cout << "Leerkracht *pl = &l;" << endl;
    Leerkracht *pl = &l;
    pl->print();
    cout << *pl << endl;

    cout <<"Student *ps = &s;" << endl;
    Student *ps = &s;
    ps->print();
    cout << *ps << endl;

    //fout:
    // pl=&s;
    // pl=&p;

    return 0;
}