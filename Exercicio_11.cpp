#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main(){
	int a, b, c, D;
cout << "Digite o valor de A: ";
  cin >> a;
cout << "Digite o valor de B: ";
  cin >> b;
cout << "Digite o valor de C: ";
  cin >> c;
D = (b*b)-4*a*c;
cout << "Analisando os valores recebidos, o valor de delta seria: " << D << endl;
  return 0;
}
