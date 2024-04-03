#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "function.h"


void addPersonne(ListDoublementChainePersonne* tete){
    struct Personne nouvelle_personne;
    
    printf("Nom : ");
    scanf("%20s", nouvelle_personne.nom);
    
    printf("Prénom : ");
    scanf("%20s", nouvelle_personne.prenom);
    
    printf("Numéro de badge");
    scanf("%d", &nouvelle_personne.numéroBadge);

    printf("Numéro de badge");
    scanf("%d", &nouvelle_personne.numéroBadge);

    printf("Code secret (max 20 caractères) : ");
    scanf("%20s", nouvelle_personne.codeSecret);

    ListDoublementChainePersonne *lc;
    lc = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    lc = tete;
    while (lc != NULL)
    {
        lc = lc->suiv;
    }

    struct ListDoublementChainePersonne newP;
    newP.value = nouvelle_personne;
    newP.prec = lc;
    newP.suiv = NULL;

    printf("Personne ajoutée avec succès.\n");
}


void display_list_personne(ListDoublementChainePersonne* tete){
    ListDoublementChainePersonne *lc;
    lc = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    lc = tete;
    while (lc != NULL)
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