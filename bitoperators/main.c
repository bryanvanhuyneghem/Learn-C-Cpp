#include <stdio.h>

typedef unsigned int uint;
const int LENGTE = sizeof(uint)*8;

int bit_i(uint x, int i){
    return (x >> i) & 1;
}

void schrijf(uint x, int lengte){
    int i;
    int viervoud = lengte/4*4;
    for(i = lengte-1; i >= viervoud; i--){
        printf("%u", bit_i(x,i));
    }
    for(i = viervoud-1; i >= 0; i -= 4) {
        printf (" ");
        int k;
        for(k = 0; k < 4; k++){
            printf ("%u",bit_i (x,i-k));
        }
    }
    printf ("    %u\n",x);
}

uint eenbit(int i){
    return 1<<i;
}

int aantal_eenbits(uint getal){
    int teller = 0;
    while (getal != 0){
        teller += (getal&1);
        getal >>= 1;
    }
    return teller;
}

uint bit_i_aangezet (uint x, int i){
    return x | eenbit (i);
}

// niet expliciet gevraagd ; wel nuttig
uint alle_bits_omgedraaid (uint x){
    return ~x;
}

uint bit_i_uitgezet (uint x, int i){
    return x & ~(eenbit(i));
}

uint bit_i_gewisseld (uint x, int i){
    return x ^ eenbit(i);
}

int zijn_gelijk (uint a, uint b){
    return a^b;
}

int is_even (uint g){
    return 1 & ~(g&1);
}

int product (int a, int b){
    int res =0;
    while (a >0) {
        if (a&0x1 == 1)
        res +=b;
        b <<=1;
        a >>=1;
    }
    return res;
}

int main() {
    printf (" lengte van uint is %u\n",LENGTE );
    // ! we doorlopen de for -lus nu wel met een unsigned int !! (... en het heeft een goede reden )
    uint i;
    for(i =0; i < 40; i++){
        schrijf(i, 10);
    }
    printf ("\n");
    for(i =0; i <40; i++){
        schrijf(eenbit(i), LENGTE );
    }
    printf("\n");
    uint getal = 951;
    for(i =0; i <10; i++){
        printf(" getal : %u ",getal ); schrijf(getal , LENGTE );
        printf(" getal met bit %u aan: %u ",i, bit_i_aangezet(getal, i));
        schrijf(bit_i_aangezet(getal, i),LENGTE );
        printf("\n");
    }
    printf ("\n");
    for(i =0; i <10; i++){
        printf(" bits omgedraaid van %u: ",i);
        schrijf(alle_bits_omgedraaid(i), 10);
    }
    printf ("\n");
    // uint getal = 951;
    for(i = 0; i < 10; i++){
        printf(" getal : %u ",getal );
        schrijf (getal ,10);
        printf(" getal met bit %u uit: %u ",i, bit_i_uitgezet(getal ,i));
        schrijf(bit_i_uitgezet(getal, i), 10);
        printf("\n");
    }
    for(i = 0; i < 10; i++){
        printf(" getal : %u ", getal); schrijf(getal, 10);
        printf(" getal met bit %u omgedraaid : %u ",i, bit_i_gewisseld(getal ,i));
        schrijf(bit_i_gewisseld(getal, i), 10);
        printf("\n");
    }
    for(i = 0; i < 10; i++){
        if(is_even(i) == 0) printf("\n%u is oneven ",i);
        else printf("\n%u is even ", i);
    }
// test van zijn_gelijk nog niet toegevoegd ; vul dat zelf aan
    printf("\nGeef twee getallen :\n");
    int a,b;
    scanf ("%i %i" ,&a ,&b);
    if( product(a,b) == a*b) printf("\nproduct is juist berekend ");
    else printf("\nproduct is niet juist berekend ");
    return 0;


    return 0;
}