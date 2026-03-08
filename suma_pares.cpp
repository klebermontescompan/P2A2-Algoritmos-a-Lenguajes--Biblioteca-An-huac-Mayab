//Kleber Jesus Montes Compañ
//Ing Animacion digital
//00623774
#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    int num1,num2,suma;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> num2;
    if (num1 % 2 == 0) {
        if (num1 > 0) {
            if (num2 % 2 == 0) {
                if (num2 > 0) {
                    suma = num1 + num2;
                    cout << "La suma es " << suma << endl;
                }
                else {
                    cout << "El segundo numero no es positivo." << endl;
                }
            }
            else {
                cout << "El segundo numero no es par." << endl;
            }
        }
        else {
            cout << "El primer numero no es positivo." << endl;
        }
    }
    else {
        cout << "El primer numero no es par." << endl;
    }
    return 0;
}