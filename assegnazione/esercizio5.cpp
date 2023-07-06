#include <iostream>
#include <cmath>
using namespace std;

/*
Determinare l'area e il perimetro di un trapezio rettangolo
conoscendo le misure delle basi e dell'altezza.
*/

main(){
    float b_maggiore;
    float b_minore;
    float altezza;
    float proiezione;
    float l_obliquo;
    float area;
    float perimetro;
    cout << "Inserisci misura base maggiore: ";
    cin >> b_maggiore;
    cout << "Inserisci misura base minore: ";
    cin >> b_minore;
    cout << "Inserisci misura base altezza: ";
    cin >> altezza;
    proiezione = b_maggiore - b_minore;
    l_obliquo = sqrt(pow(altezza, 2) + pow(proiezione, 2));
    area = ((b_maggiore + b_minore) * altezza) / 2;
    perimetro = b_maggiore + b_minore + altezza + l_obliquo;
    cout << "Il perimetro del trapezio rettangolo e': " << perimetro << "\n";
    cout << "L'area del trapezio rettangolo e': " << area << "\n";
    system("pause");


}