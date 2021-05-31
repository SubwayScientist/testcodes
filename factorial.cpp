// C++ programm to calculate n!

#include <iostream>
using namespace std;

int main() {
    int x, fac = 1, i;
    cout << "\nChoisi un nombre entier (max 16) : ";
    cin >> x;
    for (i = 1; i <= x; i++) {
        fac = fac * i;
        }
    cout << "Le factoriel de " << x << " est : " << fac << "\n\n";
    return 0;
}
