#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int a, b;
	cout << "Digite o ano que vc nasceu: ";
	cin >> a;
	b = 2025 - a;
	cout << "Sua idade e de " << b <<" anos" << endl;
	if (b >= 18) {
		cout << "Vc tem idade para votar!";
	}
	else{
		cout << "Vc nao tem idade para votar ainda!";
}
	return 0;
}
