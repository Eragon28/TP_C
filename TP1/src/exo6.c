#include <stdio.h>

#define PI 3.14159

int main() {
    float a, b;
    char op;

    printf("Entrez l'opération  (/, *, -, +) : ");
    scanf("%c", &op);

    while (op != "s") {
        printf("Entrez le premier nombre : ");
        scanf("%f", &a);
        printf("Entrez le deuxième nombre : ");
        scanf("%f", &b);
        switch (op) {
            case '/':
                a = a / b;
            case '*':
                a = a * b;
            case '-':
                a = a - b;
            case '+':
                a = a + b;
            default:
                printf("Opération invalide\n")
        }
    }

    printf("Le résultat est : %.2f\n", a);
    return 0;
}
