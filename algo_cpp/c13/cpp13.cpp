#include <iostream>
using namespace std;

int main(){
    int jj = 0, mm = 0, aa = 0;

    cout << "Entrez le jour : ";
    cin >> jj;
    cout << "Entrez le mois : ";
    cin >> mm;
    cout << "Entrez l'annee : ";
    cin >> aa;

    // Déterminer le nombre de jours du mois courant
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
            nb_jours = 31;
    }

    // Calcul du lendemain
    if (jj < nb_jours) {
        jj = jj + 1;
    } else {
        jj = 1;
        if (mm < 12) {
            mm = mm + 1;
        } else {
            mm = 1;
            aa = aa + 1;
        }
    }

    cout << "Le lendemain est : " << jj << "/" << mm << "/" << aa << endl;

    return 0;
}