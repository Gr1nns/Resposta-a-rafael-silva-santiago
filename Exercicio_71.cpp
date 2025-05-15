#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, i;
    cout << "Digite o valor do array(8): ";
    cin >> a;

    int arr[a];

    for(i = 0; i < 8; i++){
        arr[i] = 999;
    }

    return 0;
}
