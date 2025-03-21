#include <iostream>
#include <locale>
#include <iomanip>
#include <locale>
using namespace std;
int main(){
long double p, f;
setlocale(LC_ALL,"Portuguese");
cout << "Digite o sálario do fúncionario: ";
  cin >> p;
f = p+(p*0.15);
cout << "O novo sálario do fúncionario é igual a: R$" <<fixed<<setprecision(2)<<f<< endl;
  return 0;
}
