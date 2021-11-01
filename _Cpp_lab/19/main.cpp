#include <iostream>
#include <ctime>
#include "containers.h"

void verwijder(std::set<int>& verzameling){
    auto it = verzameling.begin();
    int aantal = verzameling.size();
    for(int i = 0; i < aantal; i+=3){
        auto it_hulp = it; // kopie; we verzetten onze hoofditerator en verwijderen dan het getal van hulpiterator
        it++;
        verzameling.erase(it_hulp);
        if(it != verzameling.end()){
            it++;
        }
        if(it != verzameling.end()){
            it++;
        }
    }
}

int main() {
    srand(time(0));
    int aantal = rand()%20+11;
    int max = 2*aantal;
    std::set<int> verzameling;
    while(verzameling.size() != aantal){
        verzameling.insert(rand()%max);
    }
    std::cout << verzameling << std::endl;
    verwijder(verzameling);
    std::cout << std::endl << verzameling;
    return 0;
}

void verwijder(std::set<int> set) {

}
