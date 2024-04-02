#define PERSONNE_H
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

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
    char codeSecret[5];
    struct ListDoublementChaineDate * passage;
} Personne;


typedef struct ListDoublementChainePersonne{
    struct ListDoublementChainePersonne * prec;
    struct Personne value;
    struct ListDoublementChainePersonne * suiv;
} ListDoublementChainePersonne;

typedef struct ListDoublementChaineDate{
    struct ListDoublementChaineDate * prec;
    struct Personne value;
    struct ListDoublementChainesDate * suiv;
} ListDoublementChaineDate;

void display_list_personne(ListDoublementChainePersonne* tete);
void display_one_personne(Personne pers);
void delete_people(ListDoublementChainePersonne* tete, int index);
void display_date(ListDoublementChaineDate* teteDate);
bool controleAcces(ListDoublementChainePersonne* tete);
void writeData();
void getData();

