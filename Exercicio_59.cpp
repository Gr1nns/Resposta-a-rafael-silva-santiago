#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string sexo;
    int homem=0, maior=0, idadeM=0, mulhermenor=99999999;
    double media=0, idadeH=0, idadeTotal=0;
    while(true){
        cout<<"Voce é homem(h) ou mulher(m)? ";
        cin>>sexo;
        if(sexo == "h"){
            cout<<"Qual a sua idade? ";
            cin>>idadeH;
            homem++;
            idadeTotal += idadeH;
        }
        if(sexo == "m"){
            cout<<"Qual a sua idade? ";
            cin>>idadeM;
            if(idadeM < mulhermenor){
                mulhermenor = idadeM;
            }
        }
        if(idadeH > maior){
            maior = idadeH;
        }
        if(idadeM > maior){
            maior = idadeM;
        }
        if(sexo == "q"){
            break;
        }
    }
    media = idadeTotal/homem;
    cout<<"A maior idade e: "<<maior<<" anos"<<endl;
    cout<<"Foram cadastrados "<<homem<<" homens"<<endl;
    cout<<"A mulher mais jovem, tem "<<mulhermenor<<" anos"<<endl;
    cout<<"A media da idade dos homens e de: "<<fixed<<setprecision(2)<<media<<endl;
    return 0;
}
