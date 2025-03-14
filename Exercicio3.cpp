#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    string n1;
    float n2;
 cout << "Nomo do funcionario: ";
 cin >> n1;
 cout << "Digite o salario: ";
 cin >> n2;  
 cout << "O funcionario "<< n1 << ", tem um salario de R$"<<n2 <<endl ; 

return 0;
}
