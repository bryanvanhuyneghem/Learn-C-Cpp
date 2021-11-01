/* Oef 36 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Knoop Knoop;
struct Knoop{
    int d;
    Knoop *next;
};

void voeg_vooraan_toe(int x, Knoop **pl){
    Knoop *temp = *pl;
    *pl = (Knoop*)malloc(sizeof(Knoop));
    (*pl)->d = x;
    (*pl)->next = temp;
}

/* niet-recursief */
void print_lijst(const Knoop *l){
    while (l != 0){
        printf("%d ", l->d);
        l = l->next;
    }
}

/* recursief */
void print_lijst_rec(const Knoop *l){
    if (l != 0){
        printf("%d", l->d);
        print_lijst_rec(l->next);
    }
    else{
        printf("X\n"); // 'X' om einde van de lijst aan te geven, zodat ook een lege lijst zichtbaar is
    }
}

void vernietig_lijst(Knoop **l){
    printf("\n");
    Knoop *temp;
    while (*l != 0){
        temp = *l;
        *l = temp->next;
        printf("Ik geef de knoop %d vrij\n", temp->d);
        free(temp);
    }
}

/* Lijst met elementen in stijgende volgorde, dubbels, mogelijk */
Knoop * maak_gesorteerde_lijst_automatisch(int aantal, int bovengrens){
    Knoop *l = 0;
    int getal = bovengrens;
    int i;
    for(i = 0; i < aantal; i++){
        getal -= rand()%3;
        voeg_vooraan_toe(getal, &l);
    }
    return l;
}

/* Verwijder dubbels in de lijst */
void verwijder_dubbels(Knoop** l){
    Knoop* temp = *l;
    while(temp != 0){
        while(temp->next != 0 && temp->next->d == temp->d){
            Knoop *m = temp->next;
            temp->next = m->next;
            free(m);
        }
        temp = temp->next;
    }
}

void keerom(Knoop** l){
    Knoop* current;
    Knoop* prev;
    Knoop* nextone;
    current = *l;
    prev = NULL;
    while(current != 0){
        nextone = current->next;
        current->next = prev;
        prev = current;
        current = nextone;
    }
    *l = prev;
}
/* Merget twee gerangschikte lijsten, die nadien leeg zullen zijn, in een nieuwe (gerangschikte) lijst */
Knoop* merge(Knoop** lijst1, Knoop** lijst2){
    Knoop* newl = NULL; // (nieuwe) kop van gemergede lijst
    Knoop* list1 = *lijst1; // hulppointer naar kop lijst1
    Knoop* list2 = *lijst2; // hulppointer naar kop lijst2
    Knoop* k = NULL;
    if(*lijst1 == NULL){ // lijst1 is leeg
        newl = *lijst2; // nieuwe lijst is gewoon lijst2
        *lijst2 = NULL;
    }
    else if(*lijst2 == NULL){ // lijst2 is leeg
        newl = *lijst1; // nieuwe lijst is gewoon lijst1
        *lijst1 = NULL;
    }
    if((*lijst1)->d < (*lijst2)->d){ // eerste keer vergelijken om k te setten
        newl = *lijst1; // laat de nieuwe kop naar node van lijst1 wijzen
        list1 = (*lijst1)->next; // verzet de hulppointer die je helpt om door de list te gaan
        k = newl; // verzet k naar de recentste node
    }
    else{ // idem maar met lijst2
        newl = *lijst2;
        list2 = (*lijst2)->next;
        k = newl;
    }
    while( list1 != NULL && list2 != NULL){ // zolang het einde niet behaald is
        if(list1->d  < list2->d){ // opnieuw vergelijken
            k->next = list1; // k staat op meest recent node, dus laat z'n next naar de volgende juiste node wijzen
            list1 = list1->next; // verzet de relevante list1 hulppointer
        }
        else{ // idem maar met list2
            k->next = list2;
            list2 = list2->next;
        }
        k = k->next; // verzet k naar de volgende node (laatste node die eraan geplakt is)
    }
    if( list1 != NULL){
        k->next = list1;
    }
    if( list2 != NULL){
        k->next = list2;
    }

    *lijst1 = NULL; // oude lijst = NULL
    *lijst2 = NULL; // oude lijst = NULL

    return l;
}


int main(){
    srand(time(NULL));
    Knoop* m = maak_gesorteerde_lijst_automatisch(10,1000);
    Knoop* n = maak_gesorteerde_lijst_automatisch(5,1000);
    printf("\nLIJST m:\n");
    print_lijst(m);
    printf("\nLIJST n:\n");
    print_lijst(n);
    printf("Deze worden nu gemerged. \n\n");

    Knoop* mn = merge(&m,&n);

    printf("\nNa het mergen:\n");
    printf("LIJST m:\n");
    print_lijst(m);
    printf("LIJST n:\n");
    print_lijst(n);
    printf("\nRESULTAAT n:\n");
    print_lijst(mn);
    printf("\n\n\n");

    vernietig_lijst(mn);

    /*
    srand(time(NULL));
    Knoop *l = maak_gesorteerde_lijst_automatisch(10,100);
    print_lijst(l);

    printf("\nNu wordt lijst omgekeerd. \n");
    keerom(&l);
    printf("\nNa omkeren: \n\n");
    print_lijst(l);

    vernietig_lijst(&l);
    */

    return 0;
}