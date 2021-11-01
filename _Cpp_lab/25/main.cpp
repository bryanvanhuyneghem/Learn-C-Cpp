#include <iostream>
#include <vector>
#include <memory>

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
    Rechthoek r2(4,6);
    GekleurdeRechthoek gr1;
    GekleurdeRechthoek gr3(6,9,"rood");
    Vierkant v2(10);

    vector<unique_ptr<Rechthoek>> v;
    v.push_back(make_unique<Rechthoek>(r2));
    v.push_back(make_unique<GekleurdeRechthoek>(gr1));
    v.push_back(make_unique<GekleurdeRechthoek>(gr3));
    v.push_back(make_unique<Vierkant>(v2));

    for(int i=0 ; i < v.size() ; i++) {
        cout << *v[i];
        cout << " oppervlakte: " << v[i]->oppervlakte() << endl
             << " omtrek: " << v[i]->omtrek() << endl;
    }

    return 0;
}