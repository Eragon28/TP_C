#include <stdio.h>
#include "./exo1.h"

#define MAX_CHAR 20
#define MAX_PERSONNE 20


int main() {
    int choix;
    
    do {
        printf("\nMenu :\n");
        printf("1. Définir une personne\n");
        printf("2. Afficher les personnes\n");
        printf("3. Classer les noms par date de naissance\n");
        printf("4. Retrouver, modifier et afficher une personne\n");
        printf("5. Supprimer une personne\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                definir_personne();
                break;
            case 2:
                afficher_personnes();
                break;
            case 3:
                classer_noms_par_date();
                break;
            case 4: {
                char nom_recherche[MAX_CHAR];
                printf("Nom de la personne à rechercher : ");
                scanf("%s", nom_recherche);
                retrouver_modifier_afficher_personne(nom_recherche);
                break;
            }
            case 5: {
                char nom_suppression[MAX_CHAR];
                printf("Nom de la personne à supprimer : ");
                scanf("%s", nom_suppression);
                supprimer_personne(nom_suppression);
                break;
            }
            case 0:
                printf("Fin de programme.\n");
                break;
            default:
                printf("Choix invalide. Veuillez entrer un nombre entre 0 et 5.\n");
        }
    } while (choix != 0);

    return 0;
}
