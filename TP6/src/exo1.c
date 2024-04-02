#include <stdio.h>
#include "./function.h"


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

    }while (choix != 0);

    return 0;
}