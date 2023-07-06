#include <iostream>
#include <string>
using namespace std;

/*
Considerare il nome della propria scuola come una costante.
Fornire in input la data odierna e visualizzare poi il nome della
scuola e la data stessa
*/

main(){
    const string SCUOLA = "Liceo Scientifico Elio Vittorini";
    string data;
    cout << "Fornire la data odierna: ";
    cin >> data;
    cout << SCUOLA << " " << data << endl;
    system("pause");

}