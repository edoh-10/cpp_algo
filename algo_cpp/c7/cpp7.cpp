#include <iostream>
using namespace std;

int main(){
    // déclaration des variables
    int a, b, c;

    // récupération de l'entrée de l'utilisateur
    cout << "Entrez la valeur de a: ";
    cin >> a;
    cout << "Entrez la valeur de b: ";
    cin >> b;
    cout << "Entrez la valeur de c: ";
    cin >> c; 

    // comparaison et affichage du maximum
    if(a > b && a > c){
        cout << "Le maximum est a: " << a;
    }else if (b > a && b > c){
        cout << "Le maximum est b: " << b;
    }else{
        cout << "Le maximum est c: " << c;
    }
    return 0;
}