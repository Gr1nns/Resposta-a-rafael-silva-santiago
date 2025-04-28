#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string n1, n2;
    while (true) {
        cout << "Digite a escolha do Player 1: pedra, papel ou tesoura: ";
        cin >> n1;
        cout << "Digite a escolha do Player 2: pedra, papel ou tesoura: ";
        cin >> n2;

        if ((n1 == "pedra" && n2 == "tesoura") || (n1 == "tesoura" && n2 == "papel") || (n1 == "papel" && n2 == "pedra")) {
            cout << "Player 1 ganhou!!" << endl;
        }
        else if ((n2 == "pedra" && n1 == "tesoura") || (n2 == "tesoura" && n1 == "papel") || (n2 == "papel" && n1 == "pedra")) {
            cout << "Player 2 ganhou!!" << endl;
        }
        else if (n1 == n2) {
            cout << "Empate!" << endl;
        }
        else {
            cout << "Jogada invalida! Tente novamente." << endl;
    }
    }
    return 0;
}
