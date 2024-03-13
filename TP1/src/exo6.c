#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Entrez l'opération  (/, *, -, +, s pour stopper) : ");
    scanf(" %c", &op);

    while (op != 's') { 
        printf("Entrez le premier nombre : ");
        scanf("%f", &a);
        printf("Entrez le deuxième nombre : ");
        scanf("%f", &b);
        switch (op) {
            case '/':
                a = a / b;
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
            default:
                printf("Opération invalide\n");
                break;
        }
        printf("Le résultat est : %.2f\n", a); 
        printf("Entrez l'opération  (/, *, -, +, s pour stopper) : "); 
    }

    return 0;
}
