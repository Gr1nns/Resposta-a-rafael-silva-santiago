#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	float sa, at, a, b, c;
	string nome;
	cout << "Digite o nome do funcionario: ";
	    cin >> nome;
	cout << "Digite o salario do funcionario: ";
	    cin >> sa;
	cout << "Digite a quantos anos ele trabalha na empresa: ";
	    cin >> at;

		a = sa+(sa*0.03);
		b = sa+(sa*0.125);
		c = sa+(sa*0.20);

	if (at <= 3) {
		cout << "O novo salario do funcionario sera de: R$" << fixed << setprecision(2) << a << endl;
		}
	else if (at > 3 && at <= 10) {
		cout << "O novo salario do funcionario sera de: R$" << fixed << setprecision(2) << b << endl;
	}
	else if (at > 10) {
		cout << "O novo salario do funcionario sera de: R$" << fixed << setprecision(2) << c << endl;
	}
return 0;
}
