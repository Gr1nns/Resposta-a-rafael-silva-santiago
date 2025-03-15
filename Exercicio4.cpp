#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, n1, n2;
cout << "Digite um número inteiro: ";
cin >> n;
cout << "Digite outro: ";
cin >> n1;
n2 = n + n1;
cout << "A soma de " << n << " + " << n1 << " é igual a: " << n2 << endl;
return 0;
}
