char compare(int a, int b) {
    int res;
    if (a == b) {
        res = "V";
    }
    else {
        res = "F";
    }
}

int main(int argc, char *argv[]) {
    int a, b;
    printf("Deux nombres : ");
    scanf("%d %d", &a, &b);

    printf(compare(a, b));
}