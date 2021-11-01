#include <iostream>
#include "Student.cpp"

int main () {
    int ptn[4] = {12, 7, 16, 11};
    Student s1(20021923,"Jef Bracke",4,ptn);
    Student s2(20021005,"Tom Put");
    Student s3;   // geen () toevoegen!!!
    s1.print();
    s2.print();
    s3.print();
    return 0;
}

/*
Opmerking: programma crasht indien bij constructor
slechts 3 argumenten meegegeven worden.
Beter: 3 verschillende constructoren voorzien (0,2,4 parameters)
en geen default parameters gebruiken
(zie volgende versie)
 */