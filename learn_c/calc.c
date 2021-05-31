#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    
    printf("The sum is : %f\n", num1 + num2);

    return 0;
}
