#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	float m, ms, msn;
	cout << "Digite a nota 1: ";
		cin >> m;
	cout << "Digite a nota 2: ";
	cin >> ms;
	msn = (m + ms) / 2;
		cout << "A média entre "<< fixed << setprecision(2) << m << " e " << fixed << setprecision(2)<< ms << " é igual a : " << msn << endl;
	return 0;
}
