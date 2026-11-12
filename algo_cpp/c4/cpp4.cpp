#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // déclaration des variables
    double r, p, a;
    const double PI = 3.14;

    // récupération de la valeur de r via l'entré
    cout << "Entrez le rayon r du cercle: ";
    cin >> r;

    // calcule du périmètre (p = 2 * pi * r)
    p = 2 * PI * r;

    // calcule de l'aire de la surface (a = pi * r * r)
    a = PI * pow(r, 2);

    // affichage du périmètre et du de l'air de la surface
    cout << "Le périmètre du cercle est: " << p << " et l'aire de la surface est: " << a;
    return 0;
}