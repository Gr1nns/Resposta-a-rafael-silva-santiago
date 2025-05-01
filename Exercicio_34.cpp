#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    float al, pe, fr;

    cout << "Digite Sua altura(digite em metros): ";
    cin >> al; 
    cout << "Digite Seu peso: ";
    cin >> pe;

    fr = pe / (al * al);

    cout << "Dentro do valor do IMC, vc esta: " << endl;

    if (fr < 18.5) {
        cout << "Abaixo do peso!" << endl;
    }
    else if (fr >= 18.5 && fr < 25) {
        cout << "No Peso ideal!" << endl;
    }
    else if (fr >= 25 && fr < 30) {
        cout << "Sobrepeso!" << endl;
    }
    else if (fr >= 30 && fr <= 40) {
        cout << "Obeso!" << endl;
    }
    else if (fr > 40) {
        cout << "Obeso morbido!" << endl;
    }
  return 0;
}
