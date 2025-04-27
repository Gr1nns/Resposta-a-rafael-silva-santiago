#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    long double a, b, c;
    cout << "Digite a distancia em KM: ";
        cin >> a;

        b = a + (a * 0.5);
        c = a + (a * 0.45);

        if (a <= 200) {
            cout << "O total ficara: R$" << fixed << setprecision(2) << b << endl;
        }
        else if (a > 200) {
            cout << "O total ficara: R$" << fixed << setprecision(2) << c << endl;
        }
    return 0;
}
