#include <iostream>
#include <limits>
using namespace std;

int main(){
    int jj = 0, mm = 0, aa = 0;

    cout << "Entrez le jour : ";
    cin >> jj;
    cout << "Entrez le mois : ";
    cin >> mm;
    cout << "Entrez l'annee : ";
    cin >> aa;

    bool valide = true;

    // Vérification de l'année
    if (aa <= 0) {
        valide = false;
    }
    // Vérification du mois
    else if (mm < 1 || mm > 12) {
        valide = false;
    }
    else {
        // Déterminer le nombre de jours du mois
        int nb_jours;

        switch (mm) {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                nb_jours = 31;
                break;
            case 4: case 6: case 9: case 11:
                nb_jours = 30;
                break;
            case 2: {
                bool bissextile = (aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0);
                nb_jours = bissextile ? 29 : 28;
                break;
            }
            default:
                nb_jours = 0;
        }

        // Vérification du jour
        if (jj < 1 || jj > nb_jours) {
            valide = false;
        }
    }

    // Affichage du résultat
    if (valide) {
        cout << "La date " << jj << "/" << mm << "/" << aa << " est VALIDE." << endl;
    } else {
        cout << "La date " << jj << "/" << mm << "/" << aa << " est INVALIDE." << endl;
    }

    return 0;
}