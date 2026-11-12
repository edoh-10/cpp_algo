#include <iostream>
using namespace std;

int main(){
    // déclaration des variables
    int a, b, c, d;

    // récupération des valeurs saisie par l'utilisateur
    cout << "Entrez la valeur de a: ";
    cin >> a;
    cout << "Entrez la valeur de b: ";
    cin >> b;
    cout << "Entrez la valeur de c: ";
    cin >> c;

    // affichage des valeurs avant permutation
    cout << "Affichage des valeurs avant permutation.\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "\n";
    cout << "\n";

    // l'algorithme de permutation
    d = a;
    a = b;
    b = c;
    c = d;

    // affichage après permutation
    cout << "Affichage des valeurs après permutation.\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}