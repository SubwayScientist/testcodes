#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;
    char op;
    
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    if(op == '+') {
        printf("The result is: %f\n", num1 + num2);
    } else if(op == '-') {
        printf("The result is: %f\n", num1 - num2);
    } else if(op == '/') {
        printf("The result is: %f\n", num1 / num2);
    } else if(op == '*') {
        printf("The result is: %f\n", num1 * num2);
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
