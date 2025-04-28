#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	float n1, n2, me;
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;

	me = (n1 + n2) / 2;

	if (me <= 4.9) {
		cout << "REPROVADO!" << endl;
	}
	else if (me >= 5 && me <= 6.9) {
		cout << "RECUPERACAO!" << endl;
	}
	else if (me >= 7) {
		cout << "APROVADO!" << endl;
	}
return 0;
}
