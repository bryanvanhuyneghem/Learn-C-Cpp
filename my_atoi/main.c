#include <stdio.h>

int my_atoi(const char* s){
    int res = 0;
    while (*s){
        if(*s < '0' || *s > '9')
            return -1;
        res = res*10 + (*s - '0');
        s++;
    }
    return res;
}

int main() {
    char* s1 = "600";
    printf("%d", my_atoi(s1));

}