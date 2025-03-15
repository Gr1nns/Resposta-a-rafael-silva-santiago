#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
int n, a, s;
cout << "Digite um número inteiro: ";
	cin >> n;
	a = n - 1;
	s = n + 1;
cout << "O antecessor de " << n << " é "<< a << " e o sucessor sera " << s << endl;
	return 0;
}
