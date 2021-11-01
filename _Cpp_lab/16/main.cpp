#include <iostream>
#include <memory>
#include <vector>

template<typename T>
void dupliceer(std::vector<std::unique_ptr<T>>& v, int n){
    int oorspr_grootte = v.size(); // 5
    v.resize(oorspr_grootte*n); // 15
    for(int i = oorspr_grootte-1; i >= 0; i--){ // begin met laatste naam
        int pos = i*n;
        v[pos] = std::move(v[i]);
        for(int j = pos+1; j < pos+n; j++){
            v[j] = std::make_unique<T>(*v[pos]);
        }
    }
}

int main() {
    std::unique_ptr<std::string> namen[] = {std::make_unique<std::string>("Rein"),
                                            std::make_unique<std::string>("Ada"),
                                            std::make_unique<std::string>("Eppo"),
                                            std::make_unique<std::string>("Pascal"),
                                            std::make_unique<std::string>("Ilse")};
    std::vector<std::unique_ptr<std::string>> namenvector;
    //voeg de unieke pointers van namen toe aan namenvector
    for(int i = 0; i < 5; i++){
        namenvector.emplace_back(move(namen[i]));
    }
    dupliceer(namenvector,3);
    //print de inhoud van namenvector
    for(int i = 0; i < namenvector.size(); i++){
        std::cout << *namenvector[i] << " ";
    }
    //output moet zijn: Rein Rein Rein Ada Ada Ada Eppo Eppo Eppo Pascal Pascal Pascal Ilse Ilse Ilse
}

