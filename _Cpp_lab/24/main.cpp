#include <iostream>
using namespace std;

class Rechthoek {
    public:
        Rechthoek();
        Rechthoek(int, int);
        int omtrek() const;
        int oppervlakte() const;
        virtual void print(ostream& out) const;
    protected:
        int hoogte;
    private:
        int breedte;
};

// afgeleid van Rechthoek
class GekleurdeRechthoek : public Rechthoek {
    public:
        GekleurdeRechthoek();
        GekleurdeRechthoek(int, int, const string& = "onbekend");
        virtual void print(ostream& out) const;
    private:
        string kleur;
};

// afgeleid van Rechthoek
class Vierkant : public Rechthoek {
public:
    Vierkant(int z = 1);
    virtual void print(ostream& out) const;
};

/******************* Rechthoek **********************/

Rechthoek::Rechthoek(int h, int b) : hoogte(h), breedte(b) {}
Rechthoek::Rechthoek() : Rechthoek(1,1) {}

int Rechthoek::omtrek() const {
    return (hoogte+breedte)*2;
}

int Rechthoek::oppervlakte() const {
    return hoogte*breedte;
}

void Rechthoek::print(ostream& out) const {
    out << "Rechthoek: " << breedte << " op " << hoogte << endl;
}

/******************* GekleurdeRechthoek **********************/

GekleurdeRechthoek::GekleurdeRechthoek() : Rechthoek(),  kleur("onbekend") {}
GekleurdeRechthoek::GekleurdeRechthoek(int h, int b, const string & kl) : Rechthoek(h, b), kleur(kl) {}
void GekleurdeRechthoek::print(ostream& out) const {
    Rechthoek::print(out);
    out << " kleur: " << kleur << endl;
}

/******************* Vierkant **********************/

Vierkant::Vierkant(int zijde) : Rechthoek(zijde, zijde) {}
void Vierkant::print(ostream& out) const {
    out << "Vierkant: zijde "  << hoogte << endl;
}

/************Extern ****** **********************/
// moet geen friend zijn omdat print publieke methode is
ostream& operator << (ostream& out, const Rechthoek& rh) {
    rh.print(out);
    return out;
}

int main () {
    Rechthoek r1;
    r1.print(cout);
    cout << "  oppervlakte: " << r1.oppervlakte() << endl
         << "  omtrek: " << r1.omtrek() << endl;

    Rechthoek r2(4,6);
    cout << r2;
    cout << "  oppervlakte: " << r2.oppervlakte() << endl
         << "  omtrek: " << r2.omtrek() << endl;

    GekleurdeRechthoek gr1;
    gr1.print(cout);
    cout << "  oppervlakte: " << gr1.oppervlakte() << endl
         << "  omtrek: " << gr1.omtrek() << endl;

    GekleurdeRechthoek gr2(5,7);
    cout << gr2;
    cout << "  oppervlakte: " << gr2.oppervlakte() << endl
         << "  omtrek: " << gr2.omtrek() << endl;

    GekleurdeRechthoek gr3(6,9,"rood");
    gr3.print(cout);
    cout << "  oppervlakte: " << gr3.oppervlakte() << endl
         << "  omtrek: " << gr3.omtrek() << endl;

    Vierkant v1;
    cout << v1;
    cout << "  oppervlakte: " << v1.oppervlakte() << endl
         << "  omtrek: " << v1.omtrek() << endl;

    Vierkant v2(10);
    v2.print(cout);
    cout << "  oppervlakte: " << v2.oppervlakte() << endl
         << "  omtrek: " << v2.omtrek() << endl;

    return 0;
}