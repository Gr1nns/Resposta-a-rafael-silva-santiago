#include <locale>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
long double D, SF;
cout << "Digite a quantidade de dias trabalhados: ";
cin >> D;
SF = D*(25 * 8);
cout << "O seu salario final e de aproximadente: R$" << fixed << setprecision(2) << SF << endl;
return 0;
}
