#include <iostream>
#include "containers.h"

const int AANTAL = 5;

int main() {
    // oefening 1 - stack
    std::stack<std::string> st;
    st.push("een");
    st.push("twee");
    st.push("drie");
    std::cout << st;
    std::cout << st;

    // oefening 2 - tabel van vectoren
    std::vector<std::string> tabel[AANTAL];
    tabel[1].emplace_back("aap");
    tabel[1].emplace_back("noot");
    tabel[1].emplace_back("mies");
    for(int i = 0; i < AANTAL; i++){
        std::cout << tabel[i];
    }
    std::cout << std::endl;

    // oefening 3 - eerste oplossing: lengte gekend bij declaratie
    std::vector<std::vector<int>> v(AANTAL);
    for(int i = 0; i < AANTAL; i++){
        v[i].resize(i);
        for(int k = 0; k < v[i].size(); k++){
            v[i][k] = 10+10*k;
        }
    }
    /*
    // oefening 3 - tweede oplossing: enkel plaats reserveren - gebruik push_back
    std::vector<std::vector<int>> v;
    v.reserve(AANTAL);
    for(int i = 0; i < AANTAL; i++){
        std::vector<int> w;
        w.reserve(i);
        for(int k = 0; k < i; k++){
            w.emplace_back(10+10*k);
        }
        v.emplace_back(std::move(w));
    }
    */

    for(int i = 0; i < v.size()-1; i++){
        for(int k = v[i].size()-1; k >= 0; k--){
            std::cout << v[i][k] << "+-+";
        }
        std::cout << std::endl;
    }
    return 0;
}
