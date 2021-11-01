#include <iostream>
#include <map>
#include <vector>
#include <fstream>

void regelnummers_opslaan(std::map<int, std::string>& m, std::vector<int>& v){
    std::ifstream input("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\20a\\regelnummers.txt");
    if(!input.is_open()){
        std::cout << "Bestand niet gevonden." << std::endl;
    } else {
        int nr;
        while(input >> nr){
            m[nr] = "";
            v.emplace_back(nr);
        }
    }
}

void tekstregels_opzoeken(std::map<int, std::string>& m){
    std::ifstream input("s:\\Documents\\CLion Projects\\C&C++ subject\\_Cpp_lab\\20a\\nbible.txt");
    if(!input.is_open()){
        std::cout << "Bestand niet gevonden." << std::endl;
    } else {
        std::string lijn;
        int nr = 1;
        auto it = m.begin();
        while(it != m.end()){
            while(nr <= it->first){
                getline(input, lijn);
                nr++;
            }
            it->second = lijn;
            it++;
        }
    }
}

void regelnummers_vervangen(const std::map<int, std::string>& m, const std::vector<int>& v, const std::string& bestandsnaam){
    std::ofstream output(bestandsnaam.c_str());
    for(int i = 0; i < v.size(); i++){
        auto it = m.find(v[i]);
        output << it->second << std::endl;
    }
}

int main() {
    std::map<int, std::string> tekst_op_regelnr;
    std::vector<int> volgorde_regelnummers;
    regelnummers_opslaan(tekst_op_regelnr,volgorde_regelnummers);
    tekstregels_opzoeken(tekst_op_regelnr);
    regelnummers_vervangen(tekst_op_regelnr,volgorde_regelnummers,"verhaal.txt");
    std::cout << "Het resultaat is te zien in het bestand 'verhaal.txt'." << std::endl;

    return 0;
}
