#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node {
    int number;
    node* next;
};

node* make_reverse_list();
void print_list(const node*);


int main() {
    node* list;
    printf("Enter numbers: \n");
    list = make_reverse_list();
    print_list(list);
    return 0;
}


node* make_reverse_list(){
    node* list = NULL;
    node* h;
    int number;
    scanf("%d", &number);
    while(number != 0){
        h = (node*) malloc(sizeof(node));
        h->number = number;
        scanf("%d", &number);
        h->next = list;
        list = h;
    }
    return list;
}

void print_list(const node* list){
    printf("-----\n");
    while(list != 0){
        printf("%d \n", list->number);
        list = list->next;
    }
}