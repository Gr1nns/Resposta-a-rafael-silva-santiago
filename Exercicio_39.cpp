#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int a;
    cout << "Digite 10: ";
    cin >> a;
    while (a <= 10) {
        cout << a << endl;
        a-=1;
        if(a == 3){
        	cout << "3 Acabou!"<<endl;
        	break;
		}
    }
    system("pause");
    return 0;
}
