#include <iostream>
#include <cmath>
using namespace std;

/*
    Dati i due cateti di un triangolo rettangolo, stampare
    l'area e il perimetro del triangolo stesso
*/

main(){
    float cateto1;
    float cateto2;
    float ipotenusa;
    float area;
    float perimetro;
    
    cout << "Inserire misura cateto: ";
    cin >> cateto1;
    cout << "Inserire misura secondo cateto: ";
    cin >> cateto2;
    ipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    area = cateto1 * cateto2 / 2;
    perimetro = cateto1 + cateto2 + ipotenusa;
    cout << "Area: " << area << ", perimetro: " << perimetro << "\n";
    system("pause");
}