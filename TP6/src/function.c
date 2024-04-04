#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "function.h"
#include <stdlib.h>


void addPersonne(ListDoublementChainePersonne* tete){
    struct Personne nouvelle_personne;
    
    printf("Nom : ");
    scanf("%20s", nouvelle_personne.nom);
    
    printf("Prénom : ");
    scanf("%20s", nouvelle_personne.prenom);
    
    printf("Numéro de badge : ");
    scanf("%d", &nouvelle_personne.numéroBadge);


    printf("Code secret (max 20 caractères) : ");
    scanf("%20s", nouvelle_personne.codeSecret);
    nouvelle_personne.passage = (ListDoublementChaineDate *) malloc(sizeof(ListDoublementChaineDate));

    ListDoublementChainePersonne *lc = tete;

    printf("%x \n", &tete);
    while (lc->suiv != NULL)
    {
        lc = lc->suiv;
    }
    printf("%x \n", &tete);

    struct ListDoublementChainePersonne *newP = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    newP->value = nouvelle_personne;
    newP->prec = lc;
    newP->suiv = NULL;
    lc->suiv = newP;
    
    printf("Personne ajoutée avec succès.\n");
}


void display_list_personne(ListDoublementChainePersonne* tete){
    ListDoublementChainePersonne *lc = tete;

    while (lc != NULL) {
        printf("Adresse de lc : %p\n", (void *)lc); // Affichez l'adresse de lc
        printf("Adresse de suivant : %p\n", (void *)lc->suiv); // Affichez l'adresse du suivant de lc
        printf("Personne :\n");
        printf("%s %s avec le numéro de badge %d \n", lc->value.nom, lc->value.prenom, lc->value.numéroBadge);
        
        
        /* ListDoublementChaineDate *date;
        date = (ListDoublementChaineDate *) malloc(sizeof(ListDoublementChaineDate));
        printf("%x", lc->value.passage);
        date = lc->value.passage;
        printf("Passage : \n");
        printf("%x", date);
        while (date->suiv != NULL)
        {
            printf("- %d %d %d ", date->value.jour, date->value.mois, date->value.annee );
            date = date->suiv;
        } */
        lc = lc->suiv;
    }
}
void display_one_personne(Personne pers){

}
void delete_people(ListDoublementChainePersonne* tete, int numerobadge){
    ListDoublementChainePersonne *lc;
    lc = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    lc = tete;
    bool find = false;
    while (lc != NULL && !find)
    {
        if(lc->value.numéroBadge == numerobadge){
            lc->prec->suiv = lc->suiv;
            lc->suiv->prec = lc->prec;
            find = true;
            printf("Personne supprimé \n");
        }

    }

}

bool controleAcces(ListDoublementChainePersonne* tete){
    bool ret = false;


    return ret;
}
void writeData(){

}
void getData(){

}