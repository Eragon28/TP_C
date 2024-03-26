#define N 3
#include <stdio.h>
#include <stdlib.h>

typedef struct maillon {
    int x;
    struct maillon * suiv;
} maillon;

void main(void)
{
    maillon *lc;
    maillon *tete;
    int cpt; /*init des maillons*/
    lc = (maillon *) malloc(sizeof(maillon));
    tete = lc;
    //Creation des maillons en fin de liste
    for(cpt=1;cpt<N;cpt++) //pour tous les maillons à créer
    {
        lc->suiv = (maillon *) malloc(sizeof(maillon));
        lc = lc->suiv;
    }
    lc->suiv = NULL;
    cpt = 0;
    lc = tete;
    //remplissage des valeurs de chacun des maillons
    while (lc != NULL) //tant que le maillon courant n'est pas le suivant du dernier maillon de la liste
    {
        lc->x = cpt; //affectation
        cpt++; //increment du compteur
        lc = lc->suiv;//passe au suivant
    }
    lc = tete;
    while (lc != NULL) //tant que le maillon courant n'est pas le suivant du dernier maillon de la liste
    {
        printf("Valeur du champs courant = %d \n",lc->x);
        printf("Adresse maillon courant= %X et du suivant %X\n",lc, lc->suiv);
        lc = lc->suiv;//passe au suivant
    }
}