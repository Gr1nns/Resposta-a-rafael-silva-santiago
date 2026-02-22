#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string continua="sim";
    int idade, totalidade=0, soma=0, media=0, maiorQ21=0;
    while(continua == "sim"){
        cout<<"Digite sua idade: ";
        cin>>idade;
        totalidade++;
        soma += idade;
        if(idade>21){
            maiorQ21++;
        }

        cout<<"Voce deseja continuar? (sim) (nao): ";
        cin>>continua;
    }
    media = (double)soma / totalidade;
    cout<<"Foram digitadas: "<<totalidade<<" idades"<<endl;
    cout<<"A media das idade e de: "<<fixed<<setprecision(1)<<media;
    cout<<"Tem "<<maiorQ21<<" pessoas com mais de 21 anos"<<endl;
    return 0;
}
