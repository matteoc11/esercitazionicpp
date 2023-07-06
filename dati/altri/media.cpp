#include <iostream>
using namespace std;
/*Scrivi un algoritmo che, dati in input tre numeri, ne de-
termini la media.*/

main(){
    int a;
    int b;
    int c;
    double media;
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "Inserisci il terzo numero: ";
    cin >> c;
    media = (double) (a + b + c) / 3;
    cout << "la media aritmetica di questi numeri e' " << media << endl;
    system("PAUSE");
}