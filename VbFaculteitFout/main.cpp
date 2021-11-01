#include <iostream>

using namespace std;

int fac(int getal){
    int res = 1;
    for(int i = 2; i <= getal; i++)
        res *=i;
    return res;
}

int main() {
    // Wat komt er op het scherm? 6 1   (6 juist, 1
    cout << fac(3) << " " << fac(-3);
    return 0;
}