#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node {
    int number;
    node *next;
};

// Functions and procedures

node* make_list();
void make_list_2(node**);
void print_list(const node*);

// main

int main() {
    node* list;
    printf("Geef reeks getallen in (stop met 0):\n");
    //list = make_list();
    make_list_2(&list);
    printf("Reeks getallen zijn:\n");
    print_list(list);
    return 0;
}





node* make_list() {
    node *l,*h;
    int number;
    scanf("%d",&number);
    if (number == 0)
        l = 0;
    else {
        l = (node*) malloc(sizeof(node));
        h = l;
        h->number = number;
        scanf("%d",&number);
        while (number != 0) {
            h->next = (node*) malloc(sizeof(node));
            h = h->next;
            h->number = number;
            scanf("%d",&number);
        }
        h->next = NULL;
    }
    return l;
}

void make_list_2(node** l) {
    *l = NULL;
    node* h;
    int number;
    scanf("%d",&number);
    if (number != 0){
        *l = (node*) malloc(sizeof(node));
        h = *l;
        h->number = number;
        scanf("%d",&number);
        while (number != 0) {
            h->next = (node*) malloc(sizeof(node));
            h = h->next;
            h->number = number;
            scanf("%d",&number);
        }
        h->next = NULL;
    }
}

void print_list(const node* l) {
    while (l != NULL) {
        printf("%d\n", l->number);
        l = l->next;
    }

}
