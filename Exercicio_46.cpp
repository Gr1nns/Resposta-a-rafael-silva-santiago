#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
int main(){
	int a,soma;
	cout<<"Digite 6: ";
	cin>>a;

	while(a <= 100){
		cout<< a <<endl;	
		soma+=a;
		a+=2;
}
cout<<"A soma entre estes numeros e de: "<<soma<<endl;
	return 0;
}
