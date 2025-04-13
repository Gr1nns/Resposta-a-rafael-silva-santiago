#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << ano << " é bissexto." << endl;
    }
    else {
        cout << ano << " não é bissexto." << endl;
    }
    return 0;
}
