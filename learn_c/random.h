#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int nb_aleatoire(int min, int max) {

    srand((unsigned int) time(NULL));
    rand();

    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

