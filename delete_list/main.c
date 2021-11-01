#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node {
    int number;
    node *next;
};

node* create_list();
void print_list(const node*);
void delete_element(node**,int);

int main() {
    node *list = create_list();
    printf("volledige list:\n");
    print_list(list);
    delete_element(&list,4);
    printf("\n4 weg:\n");
    print_list(list);
    delete_element(&list,1);
    printf("\n1 weg:\n");
    print_list(list);
    delete_element(&list,7);
    printf("\n7 weg:\n");
    print_list(list);
    delete_element(&list,7);
    printf("\n7 weg:\n");
    print_list(list);
    return 0;
}

node* create_list() {
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
        h->next = 0;
    }
    return l;
}

void print_list(const node *l) {
    while (l != 0) {
        printf("%d\n", l->number);
        l = l->next;
    }
}

void delete_element(node **list, int number) {
    node *m,*h;
    if (*list != 0) {
        if ((*list)->number == number) {
            m = *list;
            *list = (*list)->next;
            free(m);
        }
        else {
            h = *list;
            while (h->next!=0 && h->next->number!=number)
                h = h->next;
            if (h->next != 0) {
                m = h->next;
                h->next = m->next;
                free(m);
            }
        }
    }
}

