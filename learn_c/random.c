#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int nb_aleatoire(int min, int max) {
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main() {
    int nombre_aleatoire;
    
    srand((unsigned int) time(NULL));
    rand();
    
    nombre_aleatoire = nb_aleatoire(1, 10);
    
    printf("Nombre : %d\n", nombre_aleatoire);
    
    return EXIT_SUCCESS;
}
