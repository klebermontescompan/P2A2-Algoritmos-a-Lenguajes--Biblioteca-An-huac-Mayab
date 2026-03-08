//Kleber Jesus Montes Compañ
//Ing Animacion digital
//00623774
#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

int num1, num2, num3, num4, May;

cout << "Digite numero 1: " << endl;
cin >> num1;
cout << "Digite numero 2: " << endl;
cin >> num2;
cout << "Digite numero 3: " << endl;
cin >> num3;
cout << "Digite numero 4: " << endl;
cin >> num4;

May = num1;
if (num2 > May) May = num2;
if (num3 > May) May = num3;
if (num4 > May) May = num4;

cout << "El numero mayor es el: " << May << endl;

system("pause");

return 0;

}