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

class GekleurdVierkant : public GekleurdeRechthoek, public Vierkant {
    public:
        GekleurdVierkant(int = 1, const string& = "onbekend");
        void print(ostream& out) const;
    protected:
        string kleur;
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

/************Extern ****************************/
// moet geen friend zijn omdat print publieke methode is
ostream& operator << (ostream& out, const Rechthoek& rh) {
    rh.print(out);
    return out;
}

/************  GekleurdVierkant ****************************/
GekleurdVierkant::GekleurdVierkant(int zijde, const string& kl) : GekleurdeRechthoek(zijde, zijde, kl), Vierkant(zijde) {}

void GekleurdVierkant::print(ostream& out) const {
    Vierkant::print(out);
    out << " kleur: " << kleur << endl; // kleur in de klasse GekleurdeRechthoek is protected
}

// aangezien Rechthoek een "ambiguous base" is van GekleurdVierkant
// moet de operator << specifiek herschreven worden:
ostream& operator << (ostream& out, const GekleurdVierkant& v){
    v.print(out);
    return out;
}

int main () {
    GekleurdVierkant gv1;
    cout << gv1;
    cout << " oppervlakte: " << gv1.Vierkant::oppervlakte() << endl
         << " omtrek: " << gv1.Vierkant::omtrek() << endl;

    GekleurdVierkant gv2(12);
    gv2.print(cout);
    cout << " oppervlakte: " << gv2.Vierkant::oppervlakte() << endl
         << " omtrek: " << gv2.GekleurdeRechthoek::omtrek() << endl;

    GekleurdVierkant gv3(15,"geel");
    cout << gv3;
    cout << " oppervlakte: " << gv3.GekleurdeRechthoek::oppervlakte() << endl
         << " omtrek: " << gv3.GekleurdeRechthoek::omtrek() << endl;
    return 0;
}