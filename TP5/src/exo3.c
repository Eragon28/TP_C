void main(void)
{
    int *px;
    px = (int *) malloc (sizeof(int));
    *px = 1;
    printf("Adresse de px : %X\n", &px);
    printf("Adresse pointee par le pointeur px = %X\n", px);
    printf("Valeur memorisee a l'adresse pointee par le pointeur px = %d\n\n", *px);
}


/*
*   4- 
*     Adresses       Mémoire
*                  _____________
*    9CF07330 ->  | 418072A0    |(px)
*    .... ->      | ...         |
*    .... ->      | ...         |
*    418072A0 ->  | 1           |
*                 |_____________|
*
*
*/