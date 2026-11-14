#include <iostream>
using namespace std;

int main(){
    // déclarations des variables
    int a, b;

    // demander l'entré de l'utilisateur
    cout << "Entrez la valeur de a: ";
    cin >> a;
    cout << "Entrez la valeur de b: ";
    cin >> b;

    // rechercher le minimum et l'afficher
    if(a < b){
        cout << "Le minimum est: " << a;
    }else{
        cout << "Le minimum est: " << b;
    }

    return 0;
}