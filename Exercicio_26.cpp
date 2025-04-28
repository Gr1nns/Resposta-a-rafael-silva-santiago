#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int n1, n2;
	cout << "Digite o primeiro valor: ";
	cin >> n1;
	cout << "Digite outro: ";
	cin >> n2;

	if (n1 > n2){
		cout << "O primeiro valor e maior!" << endl;
}
	else if (n2 > n1) {
		cout << "O segundo valor e o maior!" << endl;
	}
	else if (n1 == n2) {
		cout << "Nao a valor maior, os dois sao iguais" << endl;
}
return 0;
}
