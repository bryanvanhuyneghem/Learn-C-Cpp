#include <stdio.h>

int tel_aantal_1bits(int);

int main() {
    int a = 12345, b = 67890;
    int c = ~a; int d = a&b;
    int e = a|b; int f = a^b;
    int i;
    printf("%d   %d   %d\n", a, b, c);
    printf("%d   %d   %d\n", d, e, f);
    printf("---------------\n");
    a = 3;
    for(i=0 ; i<5 ;i++) {
        a<<=i;
        printf("%d\n",a);
    }
    printf("---------------\n");
    a = -3;
    for(i=0 ; i<5 ;i++) {
        a<<=i;
        printf("%d\n",a);
    }
    printf("---------------\n");
    a = 3073;
    for(i=0 ; i<5 ;i++) {
        a>>=i;
        printf("%d\n",a);
    }
    printf("---------------\n");
    a = -3072;
    for(i=0 ; i<5 ;i++) {
        a>>=i;
        printf("%d\n",a);
    }
    return 0;
}
