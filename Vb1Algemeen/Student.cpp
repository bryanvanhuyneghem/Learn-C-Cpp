//
// Created by Bryan on 13/08/2018.
//
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student();
    Student(int nr, const string& nm,
            int aant = 0, const int* ptn = nullptr);
    ~Student();
    void print() const;

private:
    int stnr;
    string naam;
    int aantalPunten;
    int* punten;
};

Student::Student(int stnr, const string &nm, int aant, const int *ptn) {
    this->stnrstnr = stnr;
    naam = nm;
    aantalPunten = aant;
    if (aantalPunten > 0) {
        punten = new int[aantalPunten];
        for(int i=0 ; i<aantalPunten ; i++)
            punten[i] = ptn[i];
    }
    else
        punten = nullptr;
}

Student::Student() {
    stnr = 0; //niet automatisch 0!!!
    aantalPunten = 0;
    punten = nullptr;
    //naam is wel leeg (defaultconstructor van string is opgeroepen)
}

Student::~Student() {
    delete[] punten;
}

void Student::print() const {
    cout << stnr << ' ' << naam << '\t';
    for (int i=0 ; i<aantalPunten ; i++)
        cout << punten[i] << "  ";
    cout << endl;
}
