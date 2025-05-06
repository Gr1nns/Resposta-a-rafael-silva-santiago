#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {

	int vzs = 1;
	float pre, me, ma;

	while (vzs <= 8) {
		cout << "Digite o preco do produto numero " << vzs << ": ";
		cin >> pre;

		if (vzs == 1) {

			ma = pre;
			me = pre;
		}else {
			if (pre > ma) {
				ma = pre;
			}
			if (pre < me) {
				me = pre;
			}
		}
	     vzs++;
	}
	cout << fixed << setprecision(2);
	cout << "Maior preco digitado: R$ " << ma << endl;
	cout << "Menor preco digitado: R$ " << me << endl;

	return 0;
}
