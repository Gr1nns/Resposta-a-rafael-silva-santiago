#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int hr;
    float a, b, c, n1, n2, n3;

    cout << "Quantas horas de atividade fisica vc realizou neste mes?";
    cin >> hr;

    a = hr * 2;
    b = hr * 5;
    c = hr * 10;
    n1 = a * 0.05;
    n2 = b * 0.05;
    n3 = c * 0.05;

    if (hr < 10) {
        cout << "Voce ganhou "<<a<<" pontos, e R$" << fixed << setprecision(2) << n1 << endl;
    }
    else if (hr >= 10 && hr <= 20) {
        cout << "Voce ganhou " << b << " pontos, e R$" << fixed << setprecision(2) << n2 << endl;
    }
    else if (hr > 20) {
        cout << "Voce ganhou " << c << " pontos, e R$" << fixed << setprecision(2) << n3 << endl;
    }
    return 0;
}
