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

    
    ListDoublementChainePersonne *lc;
    lc = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    lc = tete;
    printf("%x \n", &tete);
    while (lc->suiv != NULL)
    {
        lc = lc->suiv;
    }
    printf("%x \n", &tete);

    ListDoublementChainePersonne newP;
    
    newP.value = nouvelle_personne;
    newP.prec = lc;
    newP.suiv = NULL;
    printf("crash %x\n", &newP);
    printf("nom : %s\n", newP.value.nom);
    lc->suiv = &newP;
    printf("%x", lc->suiv);
    printf("Personne ajoutée avec succès.\n");
}


void display_list_personne(ListDoublementChainePersonne* tete){
    ListDoublementChainePersonne *lc;
    lc = (ListDoublementChainePersonne *) malloc(sizeof(ListDoublementChainePersonne));
    lc = tete;
    while (lc != NULL)
    {
        printf("Personne : \n");
        printf("%s %s avec le numéro de badge %d \n", lc->value.nom,lc->value.prenom, lc->value.numéroBadge);
        printf("Passage : \n");
        ListDoublementChaineDate *date;
        date = (ListDoublementChaineDate *) malloc(sizeof(ListDoublementChaineDate));
        date = lc->value.passage;
        if(date->suiv != NULL){
            while (date->suiv != NULL)
            {
                printf("- %d %d %d ", date->value.jour, date->value.mois, date->value.annee );
                date = date->suiv;
            }
        }
        printf("%x", lc->suiv);
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