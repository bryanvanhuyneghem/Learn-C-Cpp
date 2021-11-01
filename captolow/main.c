#include <stdio.h>

void cap_to_low(char* s){
    while(*s){
        if(*s >= 'A' && *s <= 'Z'){
            *s = *s + 'a'-'A';
        }
        s++;
    }
}

int main() {
    char s1[80] = "AAPjE";
    cap_to_low(s1);
    printf("%s", s1);
    return 0;
}