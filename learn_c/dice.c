#include "waitFor.h"
#include "random.h"

int main() {
    int roll1, roll2, roll3;
    
    roll1 = nb_aleatoire(1, 6);
    printf("Your first roll is : %d\n", roll1);
    
    waitFor(1);
    
    roll2 = nb_aleatoire(1, 6);
    printf("Your second roll is : %d\n", roll2);
    
    waitFor(1);
    
    roll3 = nb_aleatoire(1, 6);
    printf("Your third roll is : %d\n", roll3);

    return 0;
}
