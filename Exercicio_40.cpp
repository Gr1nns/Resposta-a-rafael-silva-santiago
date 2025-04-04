#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int a;
    cout << "Digite 0: ";
    cin >> a;
    while (a < 18) {
        cout << a << endl;
        a+=3;
        if(a == 18){
        	cout << "18 Acabou!"<<endl;
		}
    }
    system("pause");
    return 0;
}
