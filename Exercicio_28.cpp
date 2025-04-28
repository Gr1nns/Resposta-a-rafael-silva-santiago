#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	float la, com, ar;
    
	cout << "Digite a largura do terreno: ";
	cin >> la;
	cout << "Digite o comprimento do terreno: ";
	cin >> com;

	ar = la * com;

	if (ar < 100) {
		cout << "TERRENO POPULAR!" << endl;
	}
	else if (ar >= 100 && ar <= 499) {
		cout << "TERRENO MASTER!" << endl;
	}
	else if (ar >= 500) {
		cout << "TERRENO VIP!" << endl;
	}
return 0;
}
