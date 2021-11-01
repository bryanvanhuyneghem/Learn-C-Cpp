#include <string>


std::string string_omgekeerd(const std::string& s){
    std::string res = s;
    for(int i = 0; i < s.size(); i++){
        res[s.size()-i-1] = s[i];
    }
    return res;
}

int main() {
    std::string s = "hallo";
    for (int i = 0 ; i < s.size() ; i++)
        printf("%c",s[i]);
    s[1] = 'e';

    s = string_omgekeerd(s);
    for (char c : s)
        printf("%c",c);
}
