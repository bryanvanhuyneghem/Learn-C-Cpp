#include <stdio.h>
#include <malloc.h>
#include <mem.h>


typedef struct node node;

struct node {
    int data;
    node* next;
};

node** geef_array_van_lijsten(int aantal){
    int i = 0;
    char woord[80];
    node** array = (node**) malloc(aantal*sizeof(node*));
    node** help = (node**) malloc(aantal*sizeof(node*));

    node* k;
    node* begin;

    for(i = 0; i < aantal; i++){
        array[i] = NULL; //
        help[i] = array[i]; // hulp pointers initialiseren
    }
    int i = 0;
    printf("Geef woorden in van max %d karakters", 80);
    fgets(woord, 80+1, stdin);

    while(strcmp(woord, "STOP\n")){
        if(i < aantal){
            begin = (node*) malloc(sizeof(node));
            begin->data = woord;
            array[i] = begin;
        }
        else{
            k = (node*) malloc(sizeof(node));
            k->data = woord;
            help[i%aantal]->next = k;
            help[i%aantal] = k;

        }
        i++;
        fgets(woord, 80+1, stdin);
    }

    return array;
}


int main() {

}