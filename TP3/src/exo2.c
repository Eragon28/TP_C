int toSecond(int heures, int minutes, int secondes) {
    int res = secondes + (minutes * 60) + (heures * 3600);
    return res;
}

int main(int argc, char *argv[])
{
    int heures = 4;
    int minutes = 43;
    int secondes = 28;

    int timeToSecond = toSecond(4, 43, 28);

    printf("Le temps en seconde de %d heures %d minutes et %d secondes en secondes est : %d secondes.", heures, minutes, secondes, timeToSecond);
}

