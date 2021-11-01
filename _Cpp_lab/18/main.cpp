#include <iostream>
#include "containers.h"

void vul_in_i_de_map_stack_bij_sleutel_aan_met_set_van_drie_strings(std::vector<std::map<std::string, std::stack<std::set<std::string>>>>& vect, int i,
                                                                        const std::string& sleutel, const std::string& str1, const std::string& str2, const std::string& str3){
    // OPDRACHT 1
    // een nieuwe set op stack die bij noot hoort steken
    std::set<std::string> s;
    s.insert(str1);
    s.insert(str2);
    s.insert(str3);
    vect[i-1][sleutel].push(std::move(s));
}

bool i_de_map_beeldt_woord_af_op_stack_waarvan_bovenste_set_dit_element_bevat(const std::vector<std::map<std::string, std::stack<std::set<std::string>>>>& vect,
                                                                                        int i, const std::string& woord, const std::string& element){
    if(i < 1){
        return false;
    }
    bool aanwezig = false;
    auto it = vect[i-1].find(woord);
    if(it != vect[i-1].end()){
        if(!it->second.empty()){ // als de bijhorende stack niet leeg is...
            if(it->second.top().count(element) != 0){
                aanwezig = true;
            }
        }
    }
    return aanwezig;
}

//hulpmethode
void controleer(const std::vector<std::map<std::string, std::stack<std::set<std::string>>>>& vect, int i, const std::string& woord, const std::string& element){
    if(i_de_map_beeldt_woord_af_op_stack_waarvan_bovenste_set_dit_element_bevat(vect, i, woord, element)){
        std::cout << "\nMap op index " << i << " bevat sleutel '" << woord << "', en element '" << element << "'" << " zit in zijn bovenste set van de bijhorende stack";
    } else {
        std::cout <<"\nFOUT voor " << i << " " << woord << " " << element;
    }
}

int main() {
    std::vector<std::map<std::string, std::stack<std::set<std::string>>>> v(5);
    vul_in_i_de_map_stack_bij_sleutel_aan_met_set_van_drie_strings(v,1,"noot","do","re","mi");
    controleer(v,1,"noot","re");
    controleer(v,1,"noot","sol");
    controleer(v,1,"appelmoes","re");
    controleer(v,0,"noot","re");
    return 0;
}
