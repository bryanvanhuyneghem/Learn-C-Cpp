#include <iostream>
#include <fstream>

int main() {
    int frequentie[26] = {0};
    std::ifstream invoer("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\07\\lord.txt");
    if(!invoer.is_open()) {
        std::cout << "Bestand niet gevonden." << std::endl;
    } else {
        char letter;
        invoer >> letter;
        while(!invoer.fail()) {
            if ('a' <= letter && letter <= 'z') {
                frequentie[(letter - 'a')]++;
            }
            invoer >> letter;
        }
        for(int i=0; i<26; i++){
            std::cout << (char)('a'+i) << ": " << frequentie[i] << std::endl;
        }
    }
    invoer.close();
    return 0;
}
