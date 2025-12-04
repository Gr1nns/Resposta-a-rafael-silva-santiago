#include<iostream>
using namespace std;
int main(){
    int n=0, soma=0;
    cout<<"Aperte 0000, para parar o programa!"<<endl;
while(true){
    n=0;
    cout<<"Digite numeros para serem somados: ";
    cin>>n;
    soma+=n;
    if(n==0000){
        break;
    }
}
cout<<"A soma final de todos os numeros e de: "<<soma<<endl;
    return 0;
}
