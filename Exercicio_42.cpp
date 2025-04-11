#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int a, b;
    cout << "Digite um numero inteiro e positivo: ";
    cin >> a;
    cout << "Digite ate que numero positivo e inteiro, que sera a quantidade de repeticoes: ";
    cin >> b;
    
    while (a < b) {
        cout << a << endl;
        a++;
    }
    
    cout << a << " Acabou!" << endl;
    
    system("pause");
    return 0;
}
