#include <iostream>
#include <ctime>

const int N = 4;

std::string genereer_string(int len){
    std::string s = "";
    for(int i=0; i<len; i++){
        s += 'a'+rand()%26;
    }
    return s;
}

void vul_array_met_strings(std::string* tab, int n, int len){
    for(int i=0; i<n; i++){
        tab[i] = genereer_string(len);
    }
}

void schrijf(const std::string* tab, int n){
    for(int i=0; i<n; i++){
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
}

void bepaal_min_en_max(const std::string* tab, int n, std::string& min, std::string& max){
    min = tab[0];
    max = tab[0];
    for(int i=1; i<n; i++){
        if(tab[i].compare(max) > 0){
            max = tab[i];
        }
        if(tab[i].compare(min) < 0){
            min = tab[i];
        }
    }
}

void splits_woorden(std::string* tab, int& aantal, std::string& zin){
    int i = 0;
    int start = 0;
    int pos = zin.find(" ");
    while(i < N && pos >= 0){
        tab[i] = zin.substr(start, pos-start);
        start = pos+1;
        pos = zin.find(" ", start);
        i++;
    }
    if(i < N) {
        tab[i] = zin.substr(start);
        i++;
    }
    aantal = i;
}

int main() {
    srand(std::time(NULL));
    int n = 0;
    std::cout << "Geef een getal in [5,10]:";
    std::cin >> n;
    while(n<5 || n>10){
        fflush(stdin);
        std::cin.clear();
        std::cout << "Opnieuw. Geef een getal in [5,10]:";
        std::cin >> n;
    }
    getchar(); // laatste enter weghalen
    std::string tab[N];
    vul_array_met_strings(tab, N, n);
    schrijf(tab, N);

    std::string min, max;
    bepaal_min_en_max(tab, N, min, max);
    std::cout << "Min is: " << min << std::endl;
    std::cout << "Max is: "  << max << std::endl;

    /*************************/

    std::string woorden[N];
    std::string zin;
    int aantal;
    std::cout << "Geef een zin op: ";
    getline(std::cin, zin);
    splits_woorden(woorden, aantal, zin);
    schrijf(woorden, aantal);
    bepaal_min_en_max(woorden, aantal, min, max);
    std::cout << "Min is: " << min << std::endl;
    std::cout << "Max is: " << max << std::endl;

    return 0;
}
