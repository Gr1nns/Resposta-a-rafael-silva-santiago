#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, i, oi;
    cout << "Digite o valor do array(10): ";
    cin >> a;

    if (a > 10) a = 10;
    if (a <= 0) a = 0;

    int arr[10];
    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            arr[i] = 5;
            cout<< arr[i];
        }
        else{
            arr[i] = 3;
             cout<< arr[i];
        }
    }
    return 0;
}
