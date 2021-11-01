#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node {
    int number;
    node* next;
};

node* make_sorted_list();
node* add_number(node*, int);
void add_number_2(node** list, int);
void print_list(const node*);

int main() {
    node* list;
    printf("Geef reeks getallen in (stop met 0):\n");
    list = make_sorted_list();
    printf("Reeks getallen is:\n");
    print_list(list);
    return 0;
}

node* make_sorted_list() {
    node* list = NULL;
    int number;
    scanf("%d",&number);
    while (number != 0) {
        //ist = add_number(list, number);
        add_number_2(&list, number);
        scanf("%d",&number);
    }
    return list;
}

node* add_number(node* list, int number){
    node* h;
    node* m;
    if(list == 0 || number <= list->number){ // lege lijst of voorraan toe te voegen
        h = (node*) malloc(sizeof(node)); // alloceer geheugen voor de nieuwe node
        h->number = number; // steek nieuw getal in nieuwe node
        h->next = list; // laat next veld van nieuwe node pointen naar adres van begin van lijst
        list = h; // laat lijst pointer nu wijzen naar adres nieuwe node ( = de nieuwe eerste node)
        return list;
    }
    else { // nieuwe node moet ergens tussenin komen
        h = list; // laat h ook naar begin wijzen van lijst
        while(h->next != NULL && h->next->number < number){ // zolang niet einde vd lijst, EN, getal in volgende node
                                                            // is kleiner dan nieuw getal, continue
            h = h->next; // verplaats h pointer naar volgende node
        } // nu staat h gepoint naar node waar hij na moet komen (getal in volgende node is al te groot)
        m = (node*) malloc(sizeof(node));
        m->number = number;
        m->next = h->next; // nieuwe node (m) z'n next level wijst nu ook naar te grote node (de volgende)
        h->next = m; // laat next veld van waar h naar point (node die voor nieuwe komt) nu wijzen naar de nieuwe node m
    }
    return list;
}

void add_number_2(node** list, int number) {
    node* h;
    node* m;
    if (*list == 0 || number <= (*list)->number) {
        h = (node*) malloc(sizeof(node));
        h->number = number;
        h->next = *list;
        *list = h;
    }
    else {
        h = *list;
        while (h->next != 0 && h->next->number < number)
            h = h->next;
        m = (node*) malloc(sizeof(node));
        m->number = number;
        m->next = h->next;
        h->next = m;
    }
}

void print_list(const node* list) {
    while (list != 0) {
        printf("%d\n", list->number);
        list = list->next;
    }
}