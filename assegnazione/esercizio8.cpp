#include <iostream>
#include <cmath>
using namespace std;

/*
    Calcolare quanti secondi sono trascorsi tra 
    due orari. L'ora è fornita nella forma: ore, minuti e secondi
*/

main(){
    int h1, m1, s1, h2, m2, s2, sec_trascorsi;
    

    cout << "Inserire primo orario (h m s): ";
    cin >> h1 >> m1 >> s1;
    cout << "Inserire secondo orario (h m s): ";
    cin >> h2 >> m2 >> s2;
    sec_trascorsi = abs(s2 - s1) + 60 * abs((m2 - m1)) + 3600 * abs((h2 - h1));
    cout << "Tra i due orari sono trascorsi " << sec_trascorsi << " secondi\n";
    system("pause");
}