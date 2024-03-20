#define PERSONNE_H

typedef struct Date {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct Personne {
    char nom[20];
    char prenom[20];
    Date date_naissance;
} Personne;

extern Personne tableau_personnes[20];

void definir_personne();
void afficher_personnes();
void classer_noms_par_date();
void supprimer_personne();
void retrouver_modifier_afficher_personne(const char*);
