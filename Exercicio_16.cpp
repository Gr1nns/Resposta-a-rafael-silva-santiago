#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
	long double a, b, c;
	cout<<"Quantos cigarros vc fuma por dia?: ";
	cin>>a;
	cout<<"Vc ja fumou por quantos anos?: ";
	cin>>b;
	c = a * 365 * b * (10.0 / 1440.0);
	cout<<"Vc perdeu: "<<fixed<<setprecision(0)<<c<<" dias de vida."<<endl;
}
