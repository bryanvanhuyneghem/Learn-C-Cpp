#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 11

typedef struct {
    int graad;
    int coeff[N];
} veeltermA;

typedef struct {
    int graad;
    int *coeff;
} veeltermB;

void lees_veeltermA(veeltermA*);
void lees_veeltermB(veeltermB*);
void free_veeltermB(veeltermB*);
void print_veeltermA(const veeltermA*);
void print_veeltermB(const veeltermB*);

int main() {
    veeltermA vA1 = {3,{3,6,1,4}}, vA2 = {0};
    veeltermB vB1 = {0};
    veeltermB vB2;
    printf("sizeof(veeltermA) = %d\n", sizeof(vA1));
    printf("sizeof(veeltermB) = %d\n", sizeof(vB1));
    printf("vA1: ");
    print_veeltermA(&vA1);
    printf("vA2: ");
    print_veeltermA(&vA2);
    printf("vA2 inlezen: ");
    lees_veeltermA(&vA2);
    printf("vA2: ");
    print_veeltermA(&vA2);
    /* print_veeltermB(&vB1); */ /* crash!!! */
    printf("vB1 inlezen: ");
    lees_veeltermB(&vB1);
    printf("vB1: ");
    print_veeltermB(&vB1);
    vA1 = vA2;
    printf("vA1 = vA2: \n");
    printf("vA1: ");
    print_veeltermA(&vA1);
    printf("vA2: ");
    print_veeltermA(&vA2);
    vA1.coeff[0] = -9;
    printf("vA1 aanpassen...\n");
    printf("vA1: ");
    print_veeltermA(&vA1);
    printf("vA2: ");
    print_veeltermA(&vA2);
    printf("vB2 = vB1: \n");
    vB2 = vB1;
    printf("vB1: ");
    print_veeltermB(&vB1);
    printf("vB2: ");
    print_veeltermB(&vB2);
    printf("vB2 aanpassen...\n");
    vB2.coeff[0] = -5;
    printf("vB1: ");
    print_veeltermB(&vB1);
    printf("vB2: ");
    print_veeltermB(&vB2);
    free_veeltermB(&vB1);
    /* free_veeltermB(&vB2); */ /* crash!!! */
    return 0;
}

// ok
void print_veeltermA(const veeltermA *v) {
    int i=0;
    for (i=0 ; i<v->graad ; i++) {
        printf("%dx^%d + ",v->coeff[i],i);
    }
    printf("%dx^%d\n",v->coeff[v->graad],v->graad);
}

// ok
void print_veeltermB(const veeltermB *v) {
    int i=0;
    for (i=0 ; i<v->graad ; i++) {
        printf("%dx^%d + ",v->coeff[i],i);
    }
    printf("%dx^%d\n",v->coeff[v->graad],v->graad);
}

// ok
void lees_veeltermA(veeltermA *v) {
    int i;
    printf("graad: ");
    scanf("%d",&v->graad);
    while (v->graad > N-1) {
        printf("Graad te groot. Nieuwe graad: ");
        scanf("%d",&v->graad);
    }
    for (i=0 ; i<=v->graad ; i++) {
        printf("coeff %d: ",i);
        scanf("%d",&v->coeff[i]);
    }
}

// ok
void lees_veeltermB(veeltermB *v) {
    int i;
    printf("graad: ");
    scanf("%d",&v->graad);
    free_veeltermB(v);
    v->coeff = (int*) malloc((v->graad +1)*sizeof(int));
    for (i=0 ; i<=v->graad ; i++) {
        printf("coeff %d: ",i);
        scanf("%d",&v->coeff[i]);
    }
}

// ok
void free_veeltermB(veeltermB *v) {
    if (v->coeff !=NULL)
        free(v->coeff);
}


