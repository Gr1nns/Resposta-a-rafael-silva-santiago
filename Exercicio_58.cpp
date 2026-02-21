#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float idade=0, quant=0, total=0;
    double media;
    while(true){
        idade = 0;
        cout<<"Qual sua idade? ";
        cin>>idade;
        if(idade == 999){
            break;
        }
        total += idade;
        quant++;
    }
    media = total/quant;
    cout<<"O total de alunos na sala é de: "<<quant<<" alunos"<<endl;
    cout<<"A media da idade de todos os alunos é de: "<<fixed<<setprecision(2)<<media<<endl;
    return 0;
}
