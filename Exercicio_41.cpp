#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int a;
    cout << "Digite 100: ";
    cin >> a;
    while (a <= 100) {
        cout << a << endl;
        a-=5;
        if(a == 0){
        	cout << "0 Acabou!"<<endl;
        	break;
		}
    }
    system("pause");
    return 0;
}
