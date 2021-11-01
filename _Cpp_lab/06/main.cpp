#include <iostream>

void schrijf(int* array, int aantal, bool achterstevoren = false, char tussenteken = ' '){
    if(achterstevoren) {
        std::cout << array[aantal - 1];
        for (int i = aantal - 2; i >= 0; i--) {
            std::cout << tussenteken << array[i];
        }
    } else {
        std::cout << array[0];
        for(int i = 1; i < aantal; i++){
            std::cout << tussenteken << array[i];
        }
    }
    std::cout << std::endl;
}

int main() {
    int t[7] = {1,3,5,7,9,11,13};
    schrijf(t, 7);
    schrijf(t, 7, true);
    schrijf(t, 7, false, '-');
    schrijf(t, 7, true, '-');
    return 0;
}
