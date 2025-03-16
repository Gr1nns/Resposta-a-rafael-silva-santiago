#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
long double m, km, hm, dam, dm, cm, mm;
cout << "Digite um número inteiro: ";
	cin >> m;
	km = m / 1000;
	hm = m / 100;
	dam = m / 10;
	dm = m * 10;
	cm = m * 100;
	mm = m * 1000;
cout << "O valor de "<<m<< "M em outras formas seriam: \n"<< fixed << setprecision(5) <<km <<"KM" << endl;
cout << fixed << setprecision(4) << hm << "Hm" << endl;
cout << fixed << setprecision(3) << dam << "Dam" << endl;
cout << fixed << setprecision(2) << dm << "Dm" << endl;
cout << fixed << setprecision(2) << cm << "Cm" << endl;
cout << fixed << setprecision(1) << mm << "Mm" << endl;
	return 0;
}
