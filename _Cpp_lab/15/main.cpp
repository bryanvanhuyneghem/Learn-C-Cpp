#include <iostream>
#include "containers.h"
#include <unordered_set>

void zoek(const std::string& woord, const std::vector<std::map<char, std::unordered_set<std::string>>>& v){
    if(woord.size() < v.size()){
        if(v[woord.size()].count(woord[0]) == 1){
            auto it = v[woord.size()].find(woord[0]);
            std::cout << it->second;
        } else {
            std::cout << "Geen woorden van die lengte met startletter " << woord[0] << std::endl;
        }
    } else {
        std::cout << "Geen woorden gevonden die zo lang zijn." << std::endl;
    }
}

int main() {
    std::vector<std::map<char, std::unordered_set<std::string>>> v(10);
    std::string woord;
    std::cout << "Geef woorden op een eindig met STOP." << std::endl;
    std::cin >> woord;
    while(woord != "STOP"){
        if(woord.size() > v.size()-1){
            v.resize(woord.size()+1);
        }
        v[woord.size()][woord[0]].insert(woord);
        std::cin >> woord;
    }

    zoek("sinterklaas", v);
    return 0;
}
