#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int a, b;
	cout << "Digite a velocidade co carro: ";
	cin >> a;
	b = 5 * (a - 80);
	if (a <= 80){
		cout << "Velocidade dentro do limite!";
}
  else if (a > 80) {
	  cout << "Vc tera de pagar uma multa de R$" << b << " por ultrapassar a velocidade permitida!" << endl;
}
	return 0;
}
