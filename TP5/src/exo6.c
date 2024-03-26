/*
*
* TP 5 : Pointeurs
* insuffisance des appels de fonction
* avec passage par valeur
*
*
*/

#include <stdio.h>
void echanger(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void main()
{
    int x,y;
    int *px, *py;
    x = 12;
    y = 34;

    px = &x;
    py = &y;

    printf("Avant échange : x = %d ; y = %d\n",x,y);
    echanger(px,py);
    printf("Après échange : x = %d ; y = %d\n",x,y);
}