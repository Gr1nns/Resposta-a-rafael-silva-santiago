#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string sexo, cont;
    double SH=0, SM=0;
    while(true){
        cout<<"Voce e homem(h) ou mulher(m)? "<<endl;
        cin>>sexo;
        if(sexo == "h"){
            cout<<"Quanto voce recebe de salario? "<<endl;
            cin>>SH;
            if(SH > SH){
                SH += SH;
            }
        }
        else if(sexo == "m"){
            cout<<"Quanto voce recebe de salario? "<<endl;
            cin>>SM;
            if(SM > SM){
                SM += SM;
            }
        }
        cout<<"Voce dejesa continuar? "<<endl;
        cin>>cont;
        if(cont == "nao"){
            break;
        }
    }
cout<<"Os homens recebem um salario de: "<<fixed<<setprecision(2)<<SH<<endl;
cout<<"As mulheres recebem um salario de: "<<fixed<<setprecision(2)<<SM<<endl;
return 0;
}
