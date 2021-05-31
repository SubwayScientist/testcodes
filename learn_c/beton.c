#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i = 0;
    double cem, sand, grav;
    
    printf("1m^3 of concrete is made of :\n  -350kg of cement\n  -680kg of sand\n  -1175kg of gravel\n");
    
    printf("Enter qty of cement (in kg) : ");
    scanf("%lf", &cem);
    printf("Enter qty of sand (in kg) : ");
    scanf("%lf", &sand);
    printf("Enter qty of gravel (in kg) : ");
    scanf("%lf", &grav);
    
    while(cem >= 350 && sand >= 680 && grav >= 1175) {
        i = i + 1;
        cem = cem - 350;
        sand = sand - 680;
        grav = grav - 1175;
    }
    printf("The maximum volume of concrete is : %d m^3\n", i);

    return 0;
}
