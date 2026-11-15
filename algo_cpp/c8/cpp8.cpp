#include <iostream>
using namespace std;

int main(){
    // déclaration des variables
    double a, x, b;

    // récupération de l'entré saisi par l'utilisateur
    cout << "Entrez la valeur de a: ";
    cin >> a;
    cout << "Entrez la valeur de b: ";
    cin >> b;

    // conditions des solutions: 
        // a != 0 => "Solution unique: " x = -b/a
        //  a = 0 && b = 0 => "Infinité de solutions"
        // a = 0 && b != 0 => "Aucune solution"

    if(a != 0){
        x = -b/a;
        cout << "On a une seule solution: " << x;
    }else if(a == 0 && b == 0){
        cout << "On a une infinité de solution dans R";
    }else{
        cout << "La solution est { }";
    }

    return 0;
}