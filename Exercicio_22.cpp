#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "Digite o ano que vc nasceu: ";
	cin >> a;
	b = 2025 - a;
	c = 18 - b;
	d = b - 18;
	cout << "Sua idade e de " << b << " anos" << endl;
	if (b >= 18) {
		cout << "Vc tem idade para se alistar no exercito, e se passaram " << d << " anos desde q vc tinha a idade ideal para se alistar no exercito!" << endl;
	}
	if(b <= 18) {
		cout << "Vc nao tem idade para se alistar ainda, mas falta " << c << " anos para que vc possa se alistar no exercito!" << endl;;
	}
	return 0;
}
