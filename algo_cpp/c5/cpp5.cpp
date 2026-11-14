#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // déclaration des variables
    double pTTC;
    int pNet, tva;

    // demander à l'utilisateur de saisir les données
    cout << "Entrez le prix: ";
    cin >> pNet;
    cout << "Entrez le TVA: ";
    cin >> tva;

    // effectuer les calcul
    pTTC = pNet * (1 + (0.01 * tva));

    // afficher le pTTC
    cout << "Le prix TTC est: " << pTTC;

    return 0;
}