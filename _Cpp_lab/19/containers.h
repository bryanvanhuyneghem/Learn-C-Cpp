//
// Created by Bryan on 24/08/2020.
//
#ifndef INC_13_CONTAINERS_H
#define INC_13_CONTAINERS_H
#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <unordered_set>

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

template<typename T>
std::ostream& operator << (std::ostream& out, const std::set<T>& s){
    out << "{ ";
    auto it = s.begin();
    for(int i = 0; i < s.size()-1; i++){
        out << *it << " , ";
        it++;
    }
    out << *it << " }" << std::endl;
    return out;
}

template<typename T>
std::ostream& operator << (std::ostream& out, const std::unordered_set<T>& s){
    out << "{ ";
    auto it = s.begin();
    for(int i = 0; i < s.size()-1; i++){
        out << *it << " , ";
        it++;
    }
    out << *it << " }" << std::endl;
    return out;
}

template<typename T>
std::ostream& operator << (std::ostream& out, std::stack<T> st){
    while(!st.empty()){
        out << " " << st.top() << std::endl;
        st.pop();
    }
    return out;
}

template<typename T>
std::ostream& operator << (std::ostream& out, const std::vector<T>& tab){
    if(!tab.empty()){
        for(int i = 0; i < tab.size()-1; i++){
            out << tab[i] << " ";
        }
        out << tab[tab.size()-1] << std::endl;
    }
    return out;
}

template<typename S, typename D>
std::ostream& operator << (std::ostream& out, const std::map<S,D>& map){
    auto it = map.begin();
    while(it != map.end()){
        out << " " << it->first << " --> " << it->second << std::endl;
        it++;
    }
    return out;
}

#endif //INC_13_CONTAINERS_H
