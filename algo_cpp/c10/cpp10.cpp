#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // déclaration de variable
    int n;

    // récupération de l'entrée de l'utilisateur
    do
    {
        cout << "Entrez une valeur compprise entre 1 et 7: ";
        cin >> n;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ce n'est pas un entier, recommencez." << endl;
            n = 0; 
        }
    } while (n < 1 || n > 7);

    switch (n)
    {
    case 1:
        cout << "Lundi" << endl;
        break;
    case 2:
        cout << "Mardi" << endl;
        break;
    case 3:
        cout << "Mercredi" << endl;
        break;
    case 4:
        cout << "Jeudi" << endl;
        break;
    case 5:
        cout << "Vendredi" << endl;
        break;
    case 6:
        cout << "Samedi" << endl;
        break;
    case 7:
        cout << "Dimanche" << endl;
        break;
    default:
        cout << "Valeur inconnue" << endl;
        break;
    }

    return 0;
}