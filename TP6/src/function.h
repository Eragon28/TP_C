#define PERSONNE_H
#include <stdio.h>
#include <time.h>

typedef struct Date {
    time_t time;
    int jour;
    int mois;
    int annee;
} Date;

typedef struct Personne {
    char nom[20];
    char prenom[20];
    int numéroBadge;
    struct ListDoublementChaineDate passage;
} Personne;


typedef struct ListDoublementChainePersonne{
    struct ListDoublementChainePersonne * prec;
    struct Personne value;
    struct ListDoublementChainePersonne * suiv;
} ListDoublementChainePersonne;

typedef struct ListDoublementChaineDate{
    struct ListDoublementChaineDate * prec;
    struct Personne value;
    struct ListDoublementChaineDate * suiv;
} ListDoublementChaineDate;

void display_personne();
void afficher_personnes();

