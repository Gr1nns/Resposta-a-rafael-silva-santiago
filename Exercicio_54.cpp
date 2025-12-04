#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int altura=0, Ma90=0, Me50Me160=0, Ma190Ma100=0;
    float peso=0, alt=0, med=0;
    for(int x=0;x<7;x++){
        cout<<"Digite o peso da pessoa("<<x+1<<"): ";
            cin>>peso;
            if(peso>90){
                Ma90++;
            }
        cout<<"Digite a altura da pessoa("<<x+1<<"): ";
            cin>>altura;
            alt+=altura;
            if(peso<50 && altura<160){
                Me50Me160++;
            }
            if(altura>190 && peso>100){
                Ma190Ma100++;
            }
    }
    med=alt/7;
    cout<<"A media da altura das pessoas e de: "<<fixed<<setprecision(1)<<med<<endl;
    cout<<"O total de pessoas com mais de 90Kg e de: "<<Ma90<<endl;
    cout<<"A quantidade de pessoas com menos de 50Kg e menos de 1.60m: "<<Me50Me160<<endl;
    cout<<"A quantidade de pessoas com mais de 1.90m e mais de 100Kg: "<<Ma190Ma100<<endl;
    return 0;
}
