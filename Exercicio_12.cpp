#include <iostream>
#include <locale>
#include <iomanip>
#include <locale>
using namespace std;
int main(){
long double p, f;
setlocale(LC_ALL,"Portuguese");
cout << "Digite o valor do produto: ";
  cin >> p;
f = p-(p*0.05);
cout << "O novo preço do produto é igual a: R$" <<fixed<<setprecision(2)<<f<< endl;
  return 0;
}
