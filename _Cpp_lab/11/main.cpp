#include <iostream>
#include <vector>

struct persoon {
    std::string naam;
    int leeftijd;
    double lengte;
};

void initialiseer(persoon& p, std::string naam, int leeftijd, double lengte){
    p.naam = naam;
    p.leeftijd = leeftijd;
    p.lengte = lengte;
}

std::ostream& operator << (std::ostream& out, const persoon & p){
    out << p.naam << " (" << p.leeftijd << " jaar, "
        << (int)p.lengte  << "m" << (int)((p.lengte-1)*100)  << ")";
    return out;
}

template <typename T>
void print(const std::vector<T> &v){
    for(int i=0; i< v.size();i++ ){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    persoon p;
    initialiseer(p, "Jan", 12, 1.83);
    std::vector<persoon> personen;
    personen.push_back(p);
    print(personen);
    return 0;
}
