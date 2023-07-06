#include <iostream>
#include <string>
using namespace std;

/*
Fornire in input il nome r l'età di una persona e stampare 
poi un messaggio di auguri di buon compleanno.
*/

main(){
    string nome;
    int età;
    cout << "inserire il tuo nome: ";
    cin >> nome;
    cout << "Inserisci la tua eta': ";
    cin >> età;
    cout << "Auguri " << nome << ", hai compiuto " << età << " anni!" << endl;
    system("pause");
}