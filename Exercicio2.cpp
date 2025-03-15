#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    string n1;
 cout << "Digite seu nome: ";
 cin >> n1;
 cout << "Olá "<< n1 << ", é um prazer te conhecer!" << endl; 
return 0;
}
