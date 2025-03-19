#include <locale>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
long double a, la, at, lt;
cout << "Digite a Altura da parede: ";
    cin >> a;
cout << "Digite a Largura da parede: ";
    cin >> la;
    at = a * la;
    lt = at / 2;
cout << "A area a ser pintade é de: " << fixed << setprecision(2) << at << "M"  << endl;
cout << "A quantidade de tinta a ser utilizada é de: Lt" << fixed << setprecision(2) <<lt << endl;
return 0;
}
