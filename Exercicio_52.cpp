#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[10], tt=0, Ma18=0, Me5=0, MM=0;
    float med;
    for(int x=0;x<10;x++){
       cout<<"Digite a idade da pessoa("<<x + 1<<"): ";
       cin>>a[x];
       tt +=a[x];
    }
    MM=a[0];
    for(int x=0;x<10;x++){
        if(a[x]>18){
            Ma18++;
        }
        if(a[x]<5){
            Me5++;
        }
        if(a[x]>MM){
            MM=a[x];
        }
    }
    med= tt / 10;
    cout<<"A media da idade das pessoa é de: "<<fixed<<setprecision(1)<<med<<endl;
    cout<<"Tem "<<Ma18<<" pessoas maiores de 18 anos."<<endl;
    cout<<"Tem "<<Me5<<" pessoas menores de 5 anos."<<endl;
    cout<<"A pessoa mais velha tem "<<MM<<" ano(s) de idade."<<endl;
    return 0;
}
