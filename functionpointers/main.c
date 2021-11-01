/* Oef 27 */

#include <stdio.h>
#include <string.h>

#define AANTAL 6

typedef struct {
    char naam[81];
    int leeftijd;
} persoon;


/* Moet met pointers werken  want anders zijn procedures niet gelijkaardig, allemaal pointers
en van type kan ik een void maken */
/* const zelfde (wil niet aan inhoud), pointers ook gemeenschappelijk */

void schrijf_persoon(const persoon * p){
    printf("%s (%d)\n", (*p).naam, (*p).leeftijd);
}

void schrijf_int(const int * i ){
    printf("%d", *i);
}

void schrijf_cstring(const char * const * s){
    printf("%s", *s);
}


/*Met 1 generieke functie alle bovenstaande uitschrijven
void * want maakt niet uit naar wat hij wijst en zo kunnen we alle types opvangen
(const void *) is het type van die parameter, zo kunnen we ook alles opvangen*/

void schrijf_array(void * tabel, int aantal, int grootte, char tussenteken, void (*schrijf)(const void*)){
    int i;
    schrijf(tabel); // welke procedure moet het nu uitvoeren? => die die ie meekreeg als parameter
    for(i = 1; i < AANTAL; i++){
        //schrijf(tabel[i]); 	FOUT	want je weet niet hoe groot vakjes in array zijn (is het een int, een double..?)
        printf("%c", tussenteken);
        schrijf(tabel + i*grootte); // grootte van de stap moet netjes bepaald worden -- je krijgt voorlopig een
                                    // warning want je mag niet rekenen met void, negeer voorlopig
    }
    printf("\n\n");
}


int main(){
    int i;
    char * namen[AANTAL] = {"Evi", "Jaro", "Timen", "Youri", "Ashaf", "Jennifer"};
    int leeftijden[AANTAL] = {21, 30, 18, 14, 22, 19};

    persoon leerlingen[AANTAL]; //hoeveel leerlingen zitten er in de array? AANTAL
    for(i = 0; i < AANTAL; i++){
        strcpy(leerlingen[i].naam, namen[i]); // *namen mag je niet verzetten (dikke pijl),dus je moet strcpy gebruiken
        leerlingen[i].leeftijd = leeftijden[i];
    }
    for(i = 0; i < AANTAL; i++){
        printf("%s is %d jaar oud.\n", leerlingen[i].naam, leerlingen[i].leeftijd);
    }

    schrijf_array((void*)leerlingen, AANTAL, sizeof(persoon), '\n', (void*)(const void *)schrijf_persoon);
    schrijf_array((void*)namen, AANTAL, sizeof(char*), ';', (void*)(const void *)schrijf_cstring);
    schrijf_array((void*)leeftijden, AANTAL, sizeof(int), '+', (void*)(const void *)schrijf_int);

    return 0;
}