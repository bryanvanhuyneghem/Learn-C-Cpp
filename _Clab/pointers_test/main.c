#include <stdio.h>

int main() {
    int i=7, j;
    double d;
    int *ip, *jp, *tp;
    double *dp;
    void *v;
    const int * p1;
    int * const p2 = &i;
    int t[25] = {10,20,30,40,50,60};

    /* 1*/ jp = &i;
    /* 2*/ j = *jp;
//    /* 3*/ *ip = i;
    /* 4*/ ip = jp;
//    /* 5*/ &i = ip;
//
    /* 6*/ (*ip)++;
    /* 7*/ *ip *=i;
    /* 8*/ ip++;
//
    /* 9*/ tp = t+2;
    /*10*/ j = &t[5] - tp;
//    /*11*/ t++;
    /*12*/ (*t)++;
    /*13*/ *tp--;
    /*14*/ j = (*tp)++;
    /*15*/ i = *tp++;
//
    /*16*/ v = tp++;
//    /*17*/ printf("%d", *v);
//    /*18*/ v++;
//
//    /*19*/ p1 = ip;
//    /*20*/ jp = p1;
//    /*21*/ (*p1)--;
//    /*22*/ dp = &i;
//    /*23*/ dp = v;
//
//    /*24*/ jp = p2;
//    /*25*/ p2 = p1;
//    /*26*/ *p2 += i;
    return 0;

    return 0;
}
