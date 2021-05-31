#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SEED time(NULL)

int main() {

    srand(SEED);
    int i, points, n = 100000;
    double x, y, r, pi;
    points = 0;
    
        
    for(i = 0; i < n; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        r = x*x + y*y;
        if (r <= 1) {
            points++;
        }
     
    }
    pi = ( (double)points / n ) * 4;
    printf("With %d points, estimate of pi is : %f\n", n, pi);


    return 0;
}
