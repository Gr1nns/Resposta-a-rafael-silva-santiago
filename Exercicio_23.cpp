
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
float p, pmu, pho;
string ge, ba;
    cout<<"Qual seu nome ?: ";
    cin>>ba;
    cout  << "Você é homem ou mulher?: ";
    cin  >> ge;
    cout <<"Digite o valor da sua compra: ";
    cin >> p;
    pmu = p-(p*0.13);
    pho = p-(p*0.05); 
    if(ge== "homem"){ 
           cout<<"O valor da sua compra sera de: R$"<<fixed<<setprecision(2)<<pho<<endl;
}
if(ge == "mulher"){
    cout<<"O valor da sua compra sera de: R$"<<fixed<<setprecision(2)<<pmu<<endl;
    }
    return 0;
    }