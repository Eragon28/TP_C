#include <stdio.h>
#include <string.h>
#include "./function.h"


int main() {
    int choix;
    struct Personne admin;
    strcpy(admin.nom ,"admin");
    strcpy(admin.prenom,"admin");
    admin.numéroBadge = 123456;
    strcpy(admin.codeSecret,"admin");
    admin.passage = (ListDoublementChaineDate *) malloc(sizeof(ListDoublementChaineDate));
    struct ListDoublementChainePersonne tete;
    tete.value = admin;
    tete.prec = NULL;
    tete.suiv = NULL;

    

    do {
        printf("\nMenu :\n");
        printf("1. Définir une personne\n");
        printf("2. Afficher la liste\n");
        printf("3. Modifier le code d'un badge\n");
        printf("4. Supprimer une personne par son numéro de badge\n");
        printf("5. Contrôle d'accès\n");
        printf("6. Sauvegarder la liste\n");
        printf("7. Utiliser la liste sauvegardée\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            addPersonne(&tete);
            break;
        case 2:
            display_list_personne(&tete);
            break;
        case 3:
            break;
        case 4:
            int numBadge;
            printf("Numéro de badge");
            scanf("%d", &numBadge);
            delete_people(&tete, numBadge); 
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 0:
            printf("Fin du programme");
            break;
        default:
            printf("Mauvaise commmande");
            break;
        }
        

    }while (choix != 0);

    return 0;
}