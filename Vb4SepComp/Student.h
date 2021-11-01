//
// Created by Bryan on 13/08/2018.
//

#ifndef VB4SEPCOMP_STUDENT_H
#define VB4SEPCOMP_STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    Student(int, const string &, int, int *);
    Student(int nr, const string &nm);
    Student();
    Student(const Student &st);
    ~Student() {
        delete[] punten;
    }

    void print() const;
    void wijzig_punt(int index, int score);
    void wijzig_naam(const string &);

private:
    int stnr;
    string naam;
    int aantalPunten;
    int* punten;
};


#endif //VB4SEPCOMP_STUDENT_H
