/*
*
* TP 5 : Pointeurs
* insuffisance des appels de fonction
* avec passage par valeur
*
*
*/
#include <stdio.h>

void echangerPointeurs(int **ppa, int **ppb)
{
    int *tmp;
    tmp = *ppa;
    *ppa = *ppb;
    *ppb = tmp;
}

/* 
*
* Explication de la procédure 
*
*   Cette procédure échange les adresses stockées dans les pointeurs. Les pointeurs ont donc inversé les adresses vers lequel il pointe.
*/


void main()
{
    int x,y;
    int *px, *py;
    x = 12;
    y = 34;

    px = &x;
    py = &y;

    printf("Avant échange : x = %x ; y = %x\n",px,py);
    echangerPointeurs(&px,&py);
    printf("Après échange : x = %x ; y = %x\n",px,py);
}