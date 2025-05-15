#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, i,vs;
    cout << "Digite o valor do array(10): ";
    cin >> a;

    if (a > 10) a = 10;
    if (a <= 0) a = 1;
    
    int arr[a];
    for(i = 0; i < a; i++){
        arr[i] = 1;
        vs=(i+1)*5;
        cout<<vs<<endl;
    }
    return 0;
}
