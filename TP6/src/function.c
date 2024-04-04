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

    while (lc->suiv != NULL)
    {
        lc = lc->suiv;
    }

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
        printf("- %s %s avec le numéro de badge %d \n", lc->value.nom, lc->value.prenom, lc->value.numéroBadge);
        
        
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
            if(lc->suiv != NULL){
                lc->suiv->prec = lc->prec;
            }

            if(lc->prec != NULL){
                lc->prec->suiv = lc->suiv;
            }
            find = true;
            printf("Personne supprimé \n"); 
        }
        lc = lc->suiv;

    } 

}

bool controleAcces(ListDoublementChainePersonne* tete, int numBadge){
    ListDoublementChainePersonne *lc = tete;
    char codeSecretUser[21];
    printf("Entrez un code secret : ");
    scanf("%20s", codeSecretUser);

    while (lc != NULL) {
        if (lc->value.numéroBadge == numBadge && strcmp(lc->value.codeSecret, codeSecretUser) == 0) {
            return true;
        }
        lc = lc->suiv;
    }

    return false;
}
void writeData(ListDoublementChainePersonne* tete){
    FILE *fichier = fopen("backup.txt", "w");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return;
    }

    ListDoublementChainePersonne *lc = tete;

   while (lcPersonne != NULL) {
        fprintf(fichier, "Nom : %s\n", lcPersonne->value.nom);
        fprintf(fichier, "Prénom : %s\n", lcPersonne->value.prenom);
        fprintf(fichier, "Numéro de badge : %d\n", lcPersonne->value.numéroBadge);
        fprintf(fichier, "Code secret : %s\n", lcPersonne->value.codeSecret);

        // Écriture des informations de passage
        fprintf(fichier, "Passage :\n");
        ListDoublementChaineDate *passage = lcPersonne->value.passage;
        while (passage != NULL) {
            fprintf(fichier, "- Date : %d/%d/%d\n", passage->value.jour, passage->value.mois, passage->value.annee);
            passage = passage->suiv;
        }

        fprintf(fichier, "\n");
        lcPersonne = lcPersonne->suiv;
    }

    fclose(fichier); 
    printf("Données sauvegardées dans le fichier.\n");
}
void getData(){

}