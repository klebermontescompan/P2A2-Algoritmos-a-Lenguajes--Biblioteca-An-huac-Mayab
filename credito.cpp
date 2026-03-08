//Kleber Jesus Montes Compañ
//Ing Animacion digital
//00623774
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main () {

    string Art;
    int plazo;
cout << "Digite el plazo otorgado: " << endl;
cin >> plazo;
switch (plazo) {
    case 48: Art = "un computador."; break;
    case 36: Art = "una TV de 42 pulgadas."; break;
    case 24: Art = "un BlackBerry."; break;
    case 12: Art = "una camara digital."; break;
    case 6: Art = "una impresora."; break;
    default: Art = "."; break;
}
if (Art == ".") {
    cout << "Error. Plazo no existe." << endl;
} else {
    cout << "Podria llevar " << Art << endl;
}
return 0;
}