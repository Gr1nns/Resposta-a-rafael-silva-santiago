#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int a = 1, nu, aci = 0, di = 0;

    cout << "Numeros sorteados: ";

    while (a++ <= 20) {
        nu = rand() % 11;
        cout << nu << " ";
        if (nu > 5) aci++;
        if (nu % 3 == 0) di++;
    }
    cout << "\nAcima de 5: " << aci << "\nDivisiveis por 3: " << di << endl;
    return 0;
}
