#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    // Saisie des coefficients
    cout << "Résolution de ax² + bx + c = 0" << endl;
    cout << "Entrez la valeur de a: ";
    cin >> a;
    cout << "Entrez la valeur de b: ";
    cin >> b;
    cout << "Entrez la valeur de c: ";
    cin >> c;

    if (a == 0) {
        // Ce n'est plus du second degré : bx + c = 0
        cout << "a = 0 : l'équation est du premier degré." << endl;
        if (b != 0) {
            cout << "Solution unique : x = " << -c / b << endl;
        } else if (c == 0) {
            cout << "Infinité de solutions dans R" << endl;
        } else {
            cout << "Aucune solution" << endl;
        }
    } else {
        // Calcul du discriminant
        double delta = b * b - 4 * a * c;
        cout << "Discriminant : delta = " << delta << endl;

        if (delta > 0) {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "Deux solutions réelles distinctes :" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Une solution réelle double : x = " << x << endl;
        } else {
            // delta < 0 : deux solutions complexes conjuguées
            double reel = -b / (2 * a);
            double imag = sqrt(-delta) / (2 * a);
            cout << "Pas de solution réelle. Deux solutions complexes :" << endl;
            cout << "x1 = " << reel << " - " << fabs(imag) << "i" << endl;
            cout << "x2 = " << reel << " + " << fabs(imag) << "i" << endl;
        }
    }

    return 0;
}