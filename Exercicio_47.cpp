#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
int main(){
	int a,soma;
	cout<<"Digite 500: ";
	cin>>a;

	while(a >= 0){
		cout<< a <<endl;	
		soma+=a;
		a-=50;
}
cout<<"A soma entre estes numeros e de: "<<soma<<endl;
	return 0;
}
