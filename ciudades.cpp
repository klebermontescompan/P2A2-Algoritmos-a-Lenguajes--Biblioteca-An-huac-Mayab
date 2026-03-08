//Kleber Jesus Montes Compañ
//Ing Animacion digital
//00623774
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main () {
int indicativo, num_min, val, tarifa;
string ciudad;
cout << "Digite el indicativo: " << endl;
cin >> indicativo;
cout << "Digite # de minutos: " << endl;
cin >> num_min;
switch (indicativo) {
case 1: val = num_min * 50;
            ciudad = "Bogota";
            tarifa = 50;
break;
case 2: val = num_min * 70;
            ciudad = "Cali";
            tarifa = 70;
            break;
case 4: val = num_min * 100;
            ciudad = "Medellin";
            tarifa = 100;
break;
case 5: val = num_min * 160;
            ciudad = "Barranquilla";
            tarifa = 160;
break;
case 6: val = num_min * 180;
            ciudad = "Pereira";
            tarifa = 180;
            break;
case 7: val = num_min * 190;
            ciudad = "Cucuta";
            tarifa = 190;
            break;
default: cout << "Indicativo no existe." << endl;
val = 0;
ciudad = "Ninguna";
tarifa = 0;
}
cout << "Ciudad a la que marca: " << ciudad << endl;
cout << "Tarifa: $"<< tarifa << endl;
cout << "Valor a llamada: $"<< val << endl;

   system("pause");
   return 0;
}