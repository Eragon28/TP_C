#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "exo1.h"

Personne tableau_personnes[20];
int nbPersonne = 0;


void definir_personne() {
    if (nbPersonne >= 20) {
        printf("Nombre maximum de personnes atteint.\n");
        return;
    }
    
    struct Personne nouvelle_personne;
    
    printf("Nom : ");
    scanf("%20s", nouvelle_personne.nom);
    
    printf("Prénom : ");
    scanf("%20s", nouvelle_personne.prenom);
    
    printf("Date de naissance (jour mois année) : ");
    scanf("%d %d %d", &nouvelle_personne.date_naissance.jour, &nouvelle_personne.date_naissance.mois, &nouvelle_personne.date_naissance.annee);
    
    tableau_personnes[nbPersonne++] = nouvelle_personne;
    
    printf("Personne ajoutée avec succès.\n");
}

void afficher_personnes() {
    printf("Liste des personnes :\n");
    for (int i = 0; i < nbPersonne; ++i) {
        printf("%s %s, né(e) le %d/%d/%d\n", tableau_personnes[i].prenom, tableau_personnes[i].nom, tableau_personnes[i].date_naissance.jour, tableau_personnes[i].date_naissance.mois, tableau_personnes[i].date_naissance.annee);
    }
}


void supprimer_personne(const char* nom) {
    int saveIndex = 0;
    for (int i = 0; i < nbPersonne; ++i) {
        if (strcmp(nom, tableau_personnes[i].nom) == 0) {
            saveIndex = i;
            break;
        }
    }
   
    printf("%i",saveIndex);
    if(nbPersonne <= 1){
        
    }else{
        for (saveIndex; saveIndex < nbPersonne; ++saveIndex) {
            tableau_personnes[saveIndex] = tableau_personnes[saveIndex + 1];
        }
    }
    nbPersonne--;

}

void classer_noms_par_date() {
    bool noModif = false;

    printf("Tri par date de naissance : \n");
    if(nbPersonne > 1){
        while (!noModif)
        {   
            noModif = true;
            struct Personne temp;
            bool change;
            for (size_t i = 0; i < nbPersonne - 1 ; i++)
            {   
                change = false;
                if(tableau_personnes[i].date_naissance.annee <  tableau_personnes[i+1].date_naissance.annee){
                    
                    change = true;

                }else if (tableau_personnes[i].date_naissance.annee ==  tableau_personnes[i+1].date_naissance.annee)
                {
                   if(tableau_personnes[i].date_naissance.mois <  tableau_personnes[i+1].date_naissance.mois){

                   }else if (tableau_personnes[i].date_naissance.mois == tableau_personnes[i+1].date_naissance.mois)
                   {
                        if(tableau_personnes[i].date_naissance.jour <  tableau_personnes[i+1].date_naissance.jour){
                            change = true;
                        }
                   }
                   
                }

                if (change)
                {
                    temp = tableau_personnes[i];
                    tableau_personnes[i] = tableau_personnes[i + 1];
                    tableau_personnes[i + 1] = temp;
                    noModif=false;
                }
            }   
            
        }
    }
    afficher_personnes();
    
}

void retrouver_modifier_afficher_personne(const char* nom) {
    int saveIndex = 0;
    for (int i = 0; i < nbPersonne; ++i) {
        if (strcmp(nom, tableau_personnes[i].nom) == 0) {
            saveIndex = i;
            break;
        }
    }
    
    //Display info
    
    int choice;



    while (choice != 4) {
        printf("%s %s, né(e) le %d/%d/%d\n", tableau_personnes[saveIndex].prenom, tableau_personnes[saveIndex].nom, tableau_personnes[saveIndex].date_naissance.jour, tableau_personnes[saveIndex].date_naissance.mois, tableau_personnes[saveIndex].date_naissance.annee);
        printf("Changer le nom (1), le prénom (2) ou la date de naissance (3) - (4 pour arreter les modifications)? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nouveau nom pour remplacer %s : ", tableau_personnes[saveIndex].nom);
            char nveNom[20];
            scanf("%20s",&nveNom);
            strcpy(tableau_personnes[saveIndex].nom,nveNom );
            break;
        case 2:
            printf("Nouveau prénom pour remplacer %s : ", tableau_personnes[saveIndex].prenom);
            char nvePrenom[20];
            scanf("%20s",&nvePrenom);
            strcpy(tableau_personnes[saveIndex].prenom,nvePrenom );
            break;
        
        case 3:
            printf("Nouvelle date pour remplacer %d/%d/%d : ", tableau_personnes[saveIndex].date_naissance.jour, tableau_personnes[saveIndex].date_naissance.mois, tableau_personnes[saveIndex].date_naissance.annee);
            int nvJour, nvMois, nvAnnee;
            scanf("%d %d %d", &nvJour, &nvMois, &nvAnnee);

            tableau_personnes[saveIndex].date_naissance.jour = nvJour;
            tableau_personnes[saveIndex].date_naissance.mois = nvMois;
            tableau_personnes[saveIndex].date_naissance.annee = nvAnnee;

            break;
        default:
            printf("Mauvaise commmande");
            break;
        }
    }
}