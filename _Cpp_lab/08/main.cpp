#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_1("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\08\\stationnetje.txt");
    std::ifstream in_2("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\08\\paddestoel.txt");
    std::ofstream uit("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\08\\mix.txt");

    if(!in_1.is_open() || !in_2.is_open()){
        std::cout << "Minstens één van de bestanden werd niet gevonden." << std::endl;
    } else{
        int teller = 0;
        std::string zin_1, zin_2;
        getline(in_1, zin_1);
        getline(in_2, zin_2);
        while(!in_1.fail() && !in_2.fail()){
            if(teller%2 == 0){
                uit << zin_1 << std::endl;
            } else{
                uit << zin_2 << std::endl;
            }
            teller++;
            getline(in_1, zin_1);
            getline(in_2, zin_2);
        }
    }
    return 0;
}
