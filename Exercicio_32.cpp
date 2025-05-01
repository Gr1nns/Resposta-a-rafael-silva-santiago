#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int ran = (rand() % 5) + 1;
    int ch;

    cout << "Digite seu chute, um numero entre 1 e 5: " << endl;
    cin >> ch;

    if (ch == ran) {
        cout << "Parabens, vc acertou o numero sorteado!" << endl;
    }
    else {
        cout << "Voce errou o numero sorteado foi: "<<ran<< ". reinicie o programa, e tente novamente!" << endl;
    }
    return 0;
}
