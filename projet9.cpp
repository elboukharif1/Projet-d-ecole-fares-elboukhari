#include <iostream>
#include <stdio.h>
using namespace std;

int f(int i, int j)
{
    return i+j;
}

int (*pf)(int, int);

int main(void)
{
    int l, m;
    pf = &f;
    printf("Entrez le premier entier : ");
    scanf("%u",&l);
    printf("\nEntrez le deuxième entier : ");
    scanf("%u",&m);
    printf("\nLeur somme est de : %u\n", (*pf)(l,m));
    return 0;
}
