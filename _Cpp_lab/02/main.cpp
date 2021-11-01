#include <iostream>
#include <iomanip>

// std::dec, std::oct, std::hex voor een getal in de stream --> geeft overeenkomstig getal in die base

int main() {
    for(int i=0; i < 64; i++){
        std::cout << std::setw(6) << std::oct << i
            << std::setw(6) << std::dec << i
            << std::setw(6) << std::hex << i
            << std::endl;
    }
    return 0;
}
