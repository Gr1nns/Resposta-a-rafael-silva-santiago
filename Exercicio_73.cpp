#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, i;
    cout << "Digite o valor do array(10): ";
    cin >> a;

    if (a < 0) a = 0;
    if (a >= 10) a = 10;

    int arr[10];
    for(i = 9; i >= 0; i--){
        arr[i] = 1;
    }
    return 0;
}
