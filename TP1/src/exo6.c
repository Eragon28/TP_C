#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Entrez l'opération  (/, *, -, +, s pour stopper) : ");
    scanf(" %c", &op);

    while (op != 's') { 
        if (op != '/' && op != '*' && op != '-' && op != '+') { 
            printf("Opération invalide\n");
        } else {
            printf("Entrez le premier nombre : ");
            scanf("%f", &a);
            printf("Entrez le deuxième nombre : ");
            scanf("%f", &b);
            switch (op) {
                case '/':
                    if (b != 0) 
                        a = a / b;
                    else
                        printf("Attention : Division par zéro\n");
                    break; 
                case '*':
                    a = a * b;
                    break;
                case '-':
                    a = a - b;
                    break;
                case '+':
                    a = a + b;
                    break;
            }
            printf("Le résultat est : %.2f\n", a); 
        }
        printf("Entrez l'opération  (/, *, -, +, s pour stopper) : "); 
        scanf(" %c", &op);
    }
    return 0;
}
