#include <iostream>
#include <cmath>
using namespace std;

/*
    Scrivere un programma che determini la 
    circonferenza e l'area di un cerchio dato il raggio
*/

main(){
    float raggio;
    float area;
    float circonferenza;

    cout << "Inserire misura raggio: ";
    cin >> raggio;
    circonferenza = 2 * M_PI * raggio;
    area = M_PI * pow(raggio, 2);
    cout << "Area: " << area << ", circonferenza: " << circonferenza << "\n";
    system("pause");
}