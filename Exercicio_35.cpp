#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string car;
    float km, po1, po2, po3, po4, lux1, lux2, lux3, lux4;
    int dias;

    cout << "Você utilizou um carro (popular) ou um carro de (luxo)? ";
    cin >> car;
    cout << "Quantos dias você utilizou o carro? ";
    cin >> dias;
    cout << "Quantos Km você andou com o carro? ";
    cin >> km;

    po1 = dias * 90;
    if (km <= 100) {
        po2 = km * 0.2;
        po3 = 0;
    }
    else {
        po2 = 100 * 0.2;
        po3 = (km - 100) * 0.1;
    }
    po4 = po1 + po2 + po3;

    lux1 = dias * 150;
    if (km <= 200) {
        lux2 = km * 0.3; 
        lux3 = 0; 
    }
    else {
        lux2 = 200 * 0.3;  
        lux3 = (km - 200) * 0.25; 
    }
    lux4 = lux1 + lux2 + lux3; 

    if (car == "popular") {
        cout << "O valor total para o carro popular é: R$ " << fixed << setprecision(2) << po4 << endl;
    }
    else if (car == "luxo") {
        cout << "O valor total para o carro de luxo é: R$ " << fixed << setprecision(2) << lux4 << endl;
    }
    else {
        cout << "Tipo de carro inválido!" << endl;
    }
    return 0;
}
