#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main(){
int a,i;
    
    cout<<"Digite o valor do array(16): ";
    cin>>a;

    if ( a > 16) a = 16;
    if (a <= 0) a = 1;
    
    int arr[a];
    arr[0]=1;
    arr[1]=1;
    for (i = 2; i < a+2; i++){
        arr[i]=arr[i-1]+arr[i-2];
        cout << arr[i-2] << '\n';
    }
return 0;
}
