#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int a, b, c, dr, dt, ds;
    cout << "Digite um dos segmentos: ";
    cin >> a;
    cout << "Digite outro segmento: ";
    cin >> b;
    cout << "Digite o ultimo segmento: ";
    cin >> c;

    dr = a + b;
    dt = b + c;
    ds = c + a;

    if (dr > c && dt > a && ds > b) {
        cout << "Os segmentos sao capazes de criar um triangulo!" << endl;
    }
    else{
        cout << "Os segmentos nao sao capazes de criar um triangulo!" << endl;
     }
    return 0;
}
