    #include <stdio.h>

    int main(int argc, char *argv[])
    {
        int X;
        X = -3 + 4 * 5 - 6;
        printf("X = %d\n", X);
        X = (-3 + 4) * 5 - 6;
        printf("X = %d\n", X);
        X = -3 + (4 * 5) - 6;
        printf("X = %d\n", X);
        X = -3 + 4 * (5 - 6);
        printf("X = %d\n", X);
        return 0;
    }
