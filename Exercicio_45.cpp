#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Digite o primeiro valor: ";
	cin>>a;
	
	cout<<"Digite o segundo valor: ";
	cin>>b;
	
	cout<<"Digite o incremento: ";
	cin>>c;
	cout<<"Contagem: ";
	if(a < b){
	while(a <= b){
		cout<< a <<endl;	
		a+=c;
    }
	}
	else if(a > b){
	while(b <= a){
	
	cout<<b<<endl;
	b+=c;
}
}
	cout<<"Acabou!"<<endl;
	return 0;
}
