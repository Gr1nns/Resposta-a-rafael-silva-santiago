#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string sair, nome, nome_mais_velho, nome_mulher_mais_jovem, sexo;
    int idade, maior=0, menor=999, quantH=0, quantM=0, quantTOTAL=0, idadeTOTAL=0, mm;
    double media=0;
    while(true){
        cout<<"Qual seu nome? ";
        cin>>nome;
        cout<<"Qual a sua idade? ";
        cin>>idade;
        idadeTOTAL += idade;
        cout<<"Voce e homem ou mulher? ";
        cin>>sexo;

        if(sexo == "h" && idade > 30){
            quantH++;
        }
        if(sexo == "m" && idade < 18){
            quantM++;
        }
        if(sexo == "m"){
            mm=idade;
            if(mm < menor){
                menor=mm;
                nome_mulher_mais_jovem = nome;
            }
        }
        if(idade > maior){
            maior = idade;
            nome_mais_velho = nome;
        }
        quantTOTAL++;
        cout<<"Deseja continuar? ";
        cin>>sair;
        if(sair == "nao"){
            break;
        }
    }
    media = (double)idadeTOTAL/quantTOTAL;
    cout<<"O nome da pessoa mais velha é: "<<nome_mais_velho<<endl;
    cout<<"O nome da mulher mais jovem é: "<<nome_mulher_mais_jovem<<endl;
    cout<<"A media das idades do grupo e de: "<<fixed<<setprecision(1)<<media<<endl;
    cout<<"Tem "<<quantH<<" homens com mais de 30 anos"<<endl;
    cout<<"Tem "<<quantM<<" mulheres com menos de 18 anos"<<endl;
    return 0;
}
