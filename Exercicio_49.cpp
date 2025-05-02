#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int con = 1, num;

while (con <= 6) {
    cout << "Digite o " << con << " numero: ";
        cin >> num;

if (num % 2 == 0) {
    cout << num << " é par." << endl;
}
con++;
}
return 0;
}
