#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int con = 1;
    float num, so = 0;


    while (con <= 7) {
        cout << "Digite o " << con << " numero: ";
        cin >> num;
        so += num;
        con++;
    }
    cout << "A soma dos 7 numeros e de: " << so << endl;
    return 0;
}
