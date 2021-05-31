#include <stdio.h>
#include <stdlib.h>

int main() {

    int secretNumber = 5;
    int guess;
    int try = 0;
    int tryLimit = 3;
    int out = 0;
    
    while(guess != secretNumber && out == 0) {
        if(try < tryLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            try++;
        } else {
            out = 1;
        }
    }
    if(out == 1) {
        printf("Out of guesses\n");
    } else {
        printf("You Win!\n");
    }
    
    return 0;
}
