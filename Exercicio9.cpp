#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
long double m, m1;
cout << "Digite a quantidade em Reais que vc tem na carteira: R$";
cin >> m;
m1 = m / 3.45;
cout << "A quantidade de Dolares que você é capaz de comprar é: $" << fixed << setprecision(2) << m1 << endl;
return 0;
}
