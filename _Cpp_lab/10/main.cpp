#include <iostream>
#include <iomanip>
#include <functional>

void schrijf(const std::string& tekst, const int* array, int aantal){
    std::cout << tekst;
    for(int i = 0; i < aantal; i++){
        std::cout << std::setw(4) << array[i] << " ";
    }
    std::cout << std::endl;
}

void vul_array(const int* a, const int* b, int * c, int grootte, std::function<int(int, int)> func){
    for(int i = 0; i < grootte; i++){
        c[i] = func(a[i], b[i]);
    }
}

int main(){
    const int GROOTTE = 10;
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int b[] = {0,10,20,30,40,50,60,70,80,90};
    int c[GROOTTE];

    vul_array(a,b,c,GROOTTE,[](int x, int y){ return x+y; });
    schrijf("SOM:      ",c,GROOTTE);

    vul_array(a,b,c,GROOTTE,[](int x, int y){ return x*y; });
    schrijf("PRODUCT:  ",c,GROOTTE);

    vul_array(a,b,c,GROOTTE,[](int x, int y){ return x-y; });
    schrijf("VERSCHIL: ",c,GROOTTE);

    return 0;
}
