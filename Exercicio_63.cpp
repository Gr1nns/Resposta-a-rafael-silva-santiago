#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string continuar = "sim";
    double soma=0, media=0, menor=99999;
    int par, numero, todosOsNumeros=0;
    while(continuar == "sim"){
        cout<<"Digite um numero: ";
        cin>>numero;
        soma += numero;

        if(numero < menor){
            menor = numero;
        }
        if(numero % 2 == 0){
            par++;
        }
        todosOsNumeros++;


        cout<<"Deseja continuar? (sim)(nao) "<<endl;
        cin>>continuar;
    }
    media = (double)soma/todosOsNumeros;
    cout<<"A soma de todos os valores e de: "<<soma<<endl;
    cout<<"O menor numero digitado e: "<<menor<<endl;
    cout<<"A media de todos os numeros digitados e de: "<<fixed<<setprecision(1)<<media<<endl;
    cout<<par<<" numeros sao pares"<<endl;
    return 0;
}
