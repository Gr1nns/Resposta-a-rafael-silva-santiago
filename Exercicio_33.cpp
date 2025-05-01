#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    float va, sa, em, pre, mes, por;

    cout << "Qual o valor da casa?";
    cin >> va;
    cout << "Qual o salario do comprador?: ";
    cin >> sa;
    cout << "Em quantos anos ele vai pagar?: ";
    cin >> em;

    por = sa * 0.3;
    mes = em * 12;
    pre = va / mes;

    cout << fixed << setprecision(2);
    cout << "Prestacao mensal: R$ " << pre << endl;

    if (pre <= por) {
        cout << "Emprestimo aprovado!" << endl;
    }
    else {
        cout << "Emprestimo negado! Prestacao maior que 30% do salario." << endl;
    }
    return 0;
}
