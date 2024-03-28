#define N 5
#include <stdio.h>
#include <stdlib.h>

typedef struct maillon {
    int x;
    struct maillon * suiv;
} maillon;

maillon* initListe(){
    maillon *lc;
    maillon *tete;
    int cpt; 
    lc = (maillon *) malloc(sizeof(maillon));
    tete = lc;
    
    for(cpt=1;cpt<N;cpt++) 
    {
        lc->suiv = (maillon *) malloc(sizeof(maillon));
        lc = lc->suiv;
    }
    lc->suiv = NULL;
    cpt = 0;
    lc = tete;
    
    while (lc != NULL) 
    {
        lc->x = cpt; 
        cpt++; 
        lc = lc->suiv;
    }
    lc = tete;

    return tete;
}

void displayList(maillon* tete){
    maillon *lc;
    lc = (maillon *) malloc(sizeof(maillon));
    lc = tete;
    while (lc != NULL) //tant que le maillon courant n'est pas le suivant du dernier maillon de la liste
    {
        printf("Valeur du champs courant = %d \n",lc->x);
        printf("Adresse maillon courant= %X et du suivant %X\n",lc, lc->suiv);
        lc = lc->suiv;//passe au suivant
    }
}

void deleteMaillon(int index, maillon* tete){
    maillon *lc;
    lc = (maillon *) malloc(sizeof(maillon));
    lc = tete;
    for (size_t i = 0; i < index; i++)
    {
        if(lc->suiv == NULL){
            break;
        }
        if(i == index-1){
            lc->suiv = lc->suiv->suiv;
            break;
        }else{
            lc = lc->suiv;
        }
    }
    
}

void main(void)
{
    maillon *lc;
    lc = (maillon *) malloc(sizeof(maillon));
    maillon* tete = initListe(N);
    
    displayList(tete);

    int index;
    printf("Index de l'élément à supprimer : \n");
    scanf("%d", &index);

    deleteMaillon(index, tete);

    displayList(tete);


}

