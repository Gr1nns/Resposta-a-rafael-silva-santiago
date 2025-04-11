#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    int a;
	
    cout << "Digite 10: ";
    cin >> a;
    while(a > 3){
        cout << a << endl;
        a--;
    }
    cout << a << " Acabou!" << endl;
    return 0;
}
