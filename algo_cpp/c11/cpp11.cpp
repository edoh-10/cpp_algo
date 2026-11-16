#include <iostream>
#include <limits>
using namespace std;

int main(){
    // déclation de variable 
    int n;

    // récupération de l'entré de l'utilisateur
    do
    {
        cout << "Entrez un nombre comprise entre 1 et 12: ";
        cin >> n;

        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (n < 1 || n > 12);

    // affichage en fonction de la valeur de n
    switch(n){
        case 1:
            cout << "Janvier" << endl;
            break;
        case 2:
            cout << "Février" << endl;
            break;
        case 3:
            cout << "Mars" << endl;
            break;
        case 4:
            cout << "Avril" << endl;
            break;
        case 5:
            cout << "Mai" << endl;
            break;
        case 6:
            cout << "Juin" << endl;
            break;
        case 7:
            cout << "Juillet" << endl;
            break;
        case 8:
            cout << "Août" << endl;
            break;
        case 9:
            cout << "Septembre" << endl;
            break;
        case 10:
            cout << "Octobre" << endl;
            break;
        case 11:
            cout << "Novembre" << endl;
            break;
        case 12:
            cout << "Décembre" << endl;
            break;
        default:
            cout << "Valeur non prise en compte" << endl;
    }
    
    return 0;
}