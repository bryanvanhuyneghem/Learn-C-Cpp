#include <iostream>
#include "containers.h"
#include <unordered_set>

int main() {
    std::map<char, std::unordered_set<std::string>> m;
    std::string woord;
    std::cout << "Geef woorden, eindig met STOP:" << std::endl;
    std::cin >> woord;
    while(woord != "STOP"){
        m[woord[0]].insert(woord);
        std::cin >> woord;
    }
    std::cout << "Geef een letter, ik zeg hoeveel verschillende woorden van daarnet met die letter starten." << std::endl;
    char letter;
    std::cin >> letter;
    if(m.count(letter) == 1){
        std::cout << "Er waren " << m[letter].size() << " verschillende woorden met die startletter." << std::endl;
    } else {
        std::cout << "Er was geen enkel woord met die startletter." << std::endl;
    }

    return 0;
}
