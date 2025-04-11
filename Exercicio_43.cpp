#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int a, b;
    cout << "Digite 30: ";
    cin >> a;
    b = a / 4; 

    while (a >= 1) {
    
        if (a % 4 == 0)
            cout << "[" << a << "]" << endl;
        else
            cout << a << endl;
        a--;
    }
    system("pause");
    return 0;
}
