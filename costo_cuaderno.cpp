//Kleber Jesus Montes Compañ
//Ing Animacion digital
//00623774
#include <iostream>
using namespace std;

int main() {
int hojas;

cout << "Numero de hojas del cuaderno?: " << endl;
cin >> hojas;
if (hojas == 250) {
    cout << "El cuaderno es cuesta 16,000" << endl;}
    else if (hojas == 100 ) {
    cout << "El cuaderno es cuesta 11,000" << endl; }
    else if (hojas == 80 ) { 
        cout << "El cuaderno es cuesta 8,000" << endl; }
        else if (hojas == 50 ) { 
            cout << "El cuaderno es cuesta 4,500" << endl; }
                else {
                    cout << "Numero de hojas incorrecto" << endl; }  
    return 0;
}