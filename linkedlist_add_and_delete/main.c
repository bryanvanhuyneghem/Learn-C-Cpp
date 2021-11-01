#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int d;
    Node* next;
};

// Lijst printen met recursie
void print_lijst(const Node* lijst){
    if(lijst != NULL){
        printf("%d", lijst->d);
        print_lijst(lijst->next);
    }
    printf("\n");
}

// Node vinden en pointer naar de node teruggeven
Node** find(int x, Node** pl){
    while(*pl != NULL && (*pl)->d < x){ // zolang geen NULL en toe te voegen getal is groter, ga naar volgende
        pl = &((*pl)->next); // verzet pl naar het adres van de pointer die het adres van de volgende node aanwijst
    }
    return pl; // geef de pointer naar pointer naar Node terug
}


// Toevoegen aan een lijst
void add(int x, Node** pl){
    Node** here = find(x,pl); // toekennen, here = pl      return pl uit de find-functie
    Node* to_be_shifted_back = *here; // dereference here (bezit adres van next-pointer),
                                      // het geeft je het adres (zit in de next-pointer) van de volgende node
    *here = (Node*) malloc(sizeof(Node)); // voorzie geheugen voor nieuwe node en verander adres
                                          // in de next-pointer via dereferentie naar nieuwe knoop
    (*here)->d = x; // vul de nieuwe node z'n getal in
    (*here)->next = to_be_shifted_back; // adres waar next-pointer van nieuwe knoop naar wijst is de volgende knoop
}

// Recursieve versie van free die lijst vrijgeeft
void free_list(Node** m){
    if( m != 0){
        free_list(&((*m)->next));
        printf("Ik geef knoop met inhoud %d vrij\n", (*m)->d);
        *m = 0;
    }
}

// Verwijder een knoop met inhoud x uit de stijgend gerangschikte lijst
void delete_node(int x, Node** m){
    Node** here = find(x,m); // here wijst naar de next-pointer die wijst naar de node die verwijderd moet worden
    if(*here != 0 && (*here)->d == x) {
        Node* to_be_deleted = *here; // wijst naar node die verwijderd moet worden
        *here = (*here)->next; // de next-pointer waar here naar wijst, wijst nu naar de volgende knoop (skip to_be..)
        free(to_be_deleted);
    }
}



int main() {
    int tab[10] = {5,4,6,9,2,8,3,1,0,7};
    Node* l = NULL;
    int i;
    for(i=0; i<10; i++){
        add(tab[i],&l);
    }
    print_lijst(l);
    return 0;
}
