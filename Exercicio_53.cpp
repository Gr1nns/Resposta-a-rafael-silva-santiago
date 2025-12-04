#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int ihq=0, imq=0, ih[5], im[5],MG=0, m=0, h=0, MH=0, qm20=0;
    string sexo;

    for(int x=0; x<5;x++){
      cout<<"Voce e homem(h) ou mulher(m)?: ";
      cin>>sexo;
      if(sexo == "m"){
        imq++;
        cout<<"Qual sua idade? ";
        cin>>im[x];
        m+=im[x];
        if(im[x]>20){
            qm20++;
        }
      }
      else{
        ihq++;
        cout<<"Qual sua idade? ";
        cin>>ih[x];
        h+=ih[x];
      }
    }
    MG=(m+h)/5;
    MH=h/ihq;

    cout<<"O total de homens cadastrados e de: "<<ihq<<endl;
    cout<<"O total de mulheres cadastradas e de: "<<imq<<endl;
    cout<<"A media das idades é de: "<<fixed<<setprecision(1)<<MG<<endl;
    cout<<"A media das idades dos homens é de: "<<fixed<<setprecision(1)<<MH<<endl;
    cout<<"O total de Mulheres com mais de 20 anos e de: "<<qm20<<endl;
    return 0;
}
