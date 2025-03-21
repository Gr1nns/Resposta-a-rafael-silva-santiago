#include <iostream>
#include <locale>
#include <iomanip>
#include <locale>
using namespace std;
int main(){
long double d, rd, m, sa, t;
setlocale(LC_ALL,"Portuguese");
cout << "Digite o total de dias que você alugou o carro: ";
  cin >> d;
cout << "Digite o total de km rodados: ";
  cin >> rd;
sa = d * 90;
m = rd * 0.20;
t = m + sa;
cout << "O total que você devera pagar é de: R$"<<fixed<<setprecision(2)<<t<<endl;
  return 0;
}
