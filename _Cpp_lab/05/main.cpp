#include <iostream>

struct persoon {
    std::string naam;
    int leeftijd;
    double lengte;
};

void initialiseer_persoon(persoon& p, const std::string& naam, int leeftijd, double lengte){
    p.naam = naam;
    p.leeftijd = leeftijd;
    p.lengte = lengte;
}

void print(const persoon& p){
    std::cout << p.naam << " (" << p.leeftijd << " jaar, " << (int)p.lengte << "m" << (int)((p.lengte-1)*100) << ")"
            << std::endl;
}

double grootte(const double x){
    return x;
}

int grootte(const persoon& p){
    return p.leeftijd; // op basis van leeftijd
}

int grootte(const std::string& woord){
    return woord.size();
}

template<typename T>
T grootste(const T* array, int lengte){
    T grootste = array[0];
    for(int i = 0; i < lengte; i++){
        if(grootte(array[i]) > grootte(grootste)){
            grootste = array[i];
        }
    }
    return grootste;
}


int main() {
    double getallen[5] = {5.5,7.7,2.2,9.9,9.8};
    std::string woorden[3] = {"geloof","hoop","de liefde"};
    std::cout << "Grootste getal is: " <<  grootste(getallen,5) << std::endl;
    std::cout << "Het grootste woord is: " << grootste(woorden,3) << "." << std::endl;

    persoon personen[3];
    initialiseer_persoon(personen[0], "Bryan", 27, 1.91);
    initialiseer_persoon(personen[1], "Cynthia", 27, 1.65);
    initialiseer_persoon(personen[2], "Fernand", 68, 1.90);

    persoon gr = grootste(personen, 3);
    print(gr);
    return 0;
}
