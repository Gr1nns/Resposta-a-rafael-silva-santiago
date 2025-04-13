#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int a, b, c;
	cout << "Digite um numero natural: ";
	cin >> a;
	b = a % 2;
	if (b == 0) {
		cout << "E par!" << endl;
	}
	else{
		cout << "E impar!" << endl;
}
	return 0;
}
