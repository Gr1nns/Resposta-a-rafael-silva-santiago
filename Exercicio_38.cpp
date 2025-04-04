#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int a;
    cout << "Digite 6: ";
    cin >> a;
    while (a < 11) {
        cout << a << endl;
        a++;
        if(a == 11){
        	cout << "11 Acabou!"<<endl;
		}     
    }
    system("pause");
    return 0;
}
