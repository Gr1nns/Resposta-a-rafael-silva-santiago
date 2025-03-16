#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
float n, d, tp;
cout << "Digite um número inteiro: ";
	cin >> n;
	d = n * 2;
	tp = n / 3;
cout << "O dobro de "<< n <<" é "<< d <<endl;
cout << "A terça parte de " << n << " é " << fixed << setprecision(2) << tp << endl;
	return 0;
}
