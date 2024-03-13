#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    bool x;


    x = 5&6;
    printf("X = 5&6 = %d\n", x);
    x = 5&&6;
    printf("X = 5&&6 = %d\n", x);
    x = 5|6;
    printf("X = 5|6 = %d\n", x);
    x = 5||6;
    printf("X = 5||6 = %d\n", x);
    x = 5^6;
    printf("X = 5^6 = %d\n", x);
    //x = 5 ^^ 6;   
    printf("X = 5 ^^ 6 = non valide\n");
    x = ~5;   
    printf("X = ~5 = %d\n", x);
    x = !5;   
    printf("X = !5 = %d\n", x);
}
/* 
Explication des résultats : 

et logique
X = 5&6 = 1

et bit à bit 
X = 5&&6 = 1

Ou bit à bit sortie non nulle
X = 5|6 = 1

Ou logique comme les valeurs sont non nul alors vrai 
X = 5||6 = 1

Ou sur les bit, la valeur reste non null
X = 5^6 = 1

Non valide
X = 5 ^^ 6 = 1

~ négation bit à bit donc reste non nulle donc vraie
X = ~5 = 1
! représente la négation comme 5 est non null et que l'on nie cela alors cela renvoie faux
X = !5 = 0
*/