#include <iostream>
using namespace std;

int main(){
    // déclaration des variables
    double la, lo, p, a;

    // récupération des valeurs d'entrez de l'utiilisateur
    cout << "Entrez la valeur de la longueur: ";
    cin >> lo;
    cout << "Entrez la valeur de la largeur: ";
    cin >> la;

    // calcule du périmètre (p = (la + lo) * 2 )
    p = (la + lo) * 2;

    // calcule de l'aire de la surface (a = lo * la)
    a = lo * la;

    // affichage des dimensions du rectangele
    cout << "Les dimensions du rectangle sont: Longueur = " << lo << " Largeur = " << la << endl;

    // affichage de son périmètre et sa surface
    cout << "Le périmètre du rectangle est: " << p << " et sa surface est: " << a;

    return 0;
}