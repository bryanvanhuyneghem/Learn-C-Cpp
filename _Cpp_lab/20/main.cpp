#include <iostream>
#include <map>
#include <vector>
#include <fstream>

int main() {
    std::map<int, std::string> tekst_op_regelnr;
    std::vector<int> volgorde_regelnummers;

    std::ifstream input("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\20\\regelnummers.txt");
    if(!input.is_open()){
        std::cout << "Bestand niet gevonden." << std::endl;
    } else {
        int nr;
        while(input >> nr){
            tekst_op_regelnr[nr] = ""; // nummer toevoegen aan sleutelverzameling
            volgorde_regelnummers.push_back(nr);
        }
        std::ifstream input2("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\20\\nbible.txt");
        if(!input2.is_open()){
            std::cout << "Bestand niet gevonden." << std::endl;
        } else {
            int tel = 1;
            std::string lijn;

            // bijbel overlopen en toevoegen aan map indien nodig
            while(getline(input2, lijn)){
                if(tekst_op_regelnr.count(tel) > 0){ // heb ik deze regel nodig?
                    tekst_op_regelnr[tel] = lijn;
                }
                tel++;
            }

            // uitprinten map in volgorde
            for(int i = 0; i < volgorde_regelnummers.size(); i++){
                std::cout << tekst_op_regelnr[volgorde_regelnummers[i]] << std::endl;
            }
        }
    }
    return 0;
}
