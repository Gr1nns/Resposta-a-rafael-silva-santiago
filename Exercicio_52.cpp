#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main(){
   int id, sid, div, qu = 1;
   
   while(qu <= 10){
   	cout<<"Digite sua idade: ";
   	cin>>id;
   	 sid += id;
   	 qu++;
   }
   div = sid / 10;
   cout<<"A media entre a idade das pessoas é de: "<<div<<endl;
}
// programa nao terminado q eu tenho q terminar
