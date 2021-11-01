#include <memory>
#include <iostream>

void schrijf(const std::unique_ptr<std::string>& s){
    if( s == nullptr){
        std::cout << "NULL";
    } else {
        std::cout << *s;
    }
}

void schrijf(const std::unique_ptr<std::string>* namen, int aantal){
    std::cout << std::endl;
    for(int i=0; i < aantal-1; i++){
        schrijf(namen[i]);
        std::cout << " - ";
    }
    schrijf(namen[aantal-1]);
}

void verwijder(std::unique_ptr<std::string>* s, int aantal, int volgnr){
    if(volgnr < aantal-1){
        for(int i = volgnr; i < aantal-1; i++){
            s[i] = move(s[i+1]);
        }
    } else {
        // indien het laatste element verwijderd moet worden
        if(volgnr == aantal-1){
            s[volgnr].reset();
        }
    }
}

int main(){
    std::unique_ptr<std::string> pnamen[]={
            std::make_unique<std::string>("Rein"),
            std::make_unique<std::string>("Ada"),
            std::make_unique<std::string>("Eppo"),
            std::make_unique<std::string>("Pascal"),
            std::make_unique<std::string>("Ilse"),
    };
    schrijf(pnamen,5);
    verwijder(pnamen,5,1);
    schrijf(pnamen,5);
    return 0;
}
