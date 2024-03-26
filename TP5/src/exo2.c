/*
*
* TP 5 : Pointeurs
* : lecture de l'adresse des éléments d'un tableau
*
*/

#include <stdio.h>
#define N 5
void main()
{
    int i;
    double t[N] = {10, 20, 30, 40, 50};
    for(i=0;i<N;i++) {
        printf("t[%d] = %f ; &t[%d] = %u\n",i,t[i],i,&t[i]);
    }
}

/* 
* QUESTIONS : 
*
*   1 - 
*   On observe que les adresses des int du tableau ont un écart de 4. Donc pour 1 valeurs int 4 bits sont réservés.
*
*   2- 
*      
*     Adresses       Mémoire
*                    _____________
*    2850917744 ->  | 10          |
*    2850917748 ->  | 20          |
*    2850917752 ->  | 30          |
*    2850917756 ->  | 40          |
*    2850917760 ->  | 50          |
*                   |_____________|
*
*
*   3- 
*   On remarque qu'en fonction du type de variable déclarée, le nombre de bits réservés change :
*       - short int : 2 bits réservés
*       - int : 4 bits 
*       - float : 4 bits
*       - double : 8 bits
*
*   4- 
*     Adresses       Mémoire
*                  _____________
*    9CF07330 ->  | 418072A0    |(px)
*    .... ->         | ...         |
*    .... ->      | ...         |
*    418072A0 ->  | 1           |
*                 |_____________|
*
*/