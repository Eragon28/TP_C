#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "function.h"

void display_list_personne(ListDoublementChainePersonne* tete){
    ListDoublementChainePersonne *lc;
    lc = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    lc = tete;
    while (lc != NULL) //tant que le maillon courant n'est pas le suivant du dernier maillon de la liste
    {
        printf("Valeur du champs courant = %d \n",lc->value);
        printf("Adresse maillon courant= %X et du suivant %X\n",lc, lc->suiv);
        lc = lc->suiv;//passe au suivant
    }
}
void display_one_personne(Personne pers){

}
void delete_people(ListDoublementChainePersonne* tete, int index){

}
void display_date(ListDoublementChaineDate* teteDate){

}
bool controleAcces(ListDoublementChainePersonne* tete){
    return false;
}
void writeData(){

}
void getData(){

}