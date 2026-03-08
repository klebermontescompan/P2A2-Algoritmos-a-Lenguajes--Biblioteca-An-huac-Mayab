//Kleber Jesus Montes Compañ
//Ing Animacion digital
//00623774
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main () {

int num, val_compra;
string total_pag;
cout << "Digite numero obtenido: " << endl;
cin >> num;
cout << "Digite valor de la compra: $ " << endl;
cin >> val_compra;

switch (num) {
case 0: case 1: total_pag = to_string(val_compra * 0.95); break;
case 2: case 3: total_pag = to_string(val_compra * 0.87); break;
case 4: case 5: total_pag = to_string(val_compra * 0.78); break;
case 6: case 7: total_pag = to_string(val_compra * 0.7); break;
case 8: case 9: total_pag = to_string(val_compra * 0.5); break;
default: 
    cout << "Error. Numero invalido" << endl;
    break;
}

if (num >= 0 && num <= 9) {
    cout << "Valor total a pagar: $ " << total_pag << endl;
}

system("pause");

return 0;
}