#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	string n;
	int a, b, c;
	cout << "Digite seu nome: ";
	cin >> n;
	cout << "digite a nota 1: ";
	cin >> a;
	cout << "digite a nota 2: ";
	cin >> b;
	c = (a + b) / 2;
	if (c >= 7){
		cout << "O aluno esta acima da media, tendo como nota: " << c << endl;
}
	if (c < 7) {
		cout << "O aluno esta abaixo da media, tendo como nota: " << c << endl;
	}
	return 0;
}
