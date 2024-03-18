#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


void triBulle(int tab[]){
    bool noModif = false;
    int temp = 0;
    int taille = 50;
    while (!noModif)
    {
        noModif = true;
        
        
        for (size_t i = 0; i < taille-1; i++)
        {
            if(tab[i] > tab[i+1]){
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                noModif = false;
            }
        }
    }

    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }

    
}



void triMinimaSucc(int tab[], int taille){

    for (int i = 0; i < taille; i++) {
        int min = tab[i];
        int minIndex = i;
        
        for (int j = i + 1; j < taille; j++) {
            if (tab[j] < min) {
                min = tab[j];
                minIndex = j;
            }
        }
        
        int temp = tab[i];
        tab[i] = tab[minIndex];
        tab[minIndex] = temp;
    }
}


int main(int argc, char *argv[])
{
    int tableau[50];
    int tableau2[50];
    int i;

    srand(time(NULL));
    for (i = 0; i < 50; i++) {
        tableau[i] = rand() % 100; 
        tableau2[i] = rand() % 100;
    }

    printf("Tableau de 50 entiers :\n\n");
        for (int i = 0; i < 50; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    printf("Tri à bulle:\n");
    triBulle(tableau);
    printf("\n");
    printf("\n");


    printf("Tableau de 50 entiers :\n\n");
        for (int i = 0; i < 50; i++) {
        printf("%d ", tableau2[i]);
    }
    printf("\n");
    printf("Tri Min Succ:\n");
    triMinimaSucc(tableau2, 50);
    for (int i = 0; i < 50; i++) {
        printf("%d ", tableau2[i]);
    }
}

