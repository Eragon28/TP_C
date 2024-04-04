#define ACCESS
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
    char codeSecret[20];
    struct ListDoublementChaineDate * passage;
} Personne;


typedef struct ListDoublementChainePersonne{
    struct ListDoublementChainePersonne * prec;
    struct Personne value;
    struct ListDoublementChainePersonne * suiv;
} ListDoublementChainePersonne;

typedef struct ListDoublementChaineDate{
    struct ListDoublementChaineDate * prec;
    struct Date value;
    struct ListDoublementChainesDate * suiv;
} ListDoublementChaineDate;



void addPersonne(ListDoublementChainePersonne* tete);
void display_list_personne(ListDoublementChainePersonne* tete);
void display_one_personne(Personne pers);
void delete_people(ListDoublementChainePersonne* tete, int index);
bool controleAcces(ListDoublementChainePersonne* tete);
void writeData();
void getData();

