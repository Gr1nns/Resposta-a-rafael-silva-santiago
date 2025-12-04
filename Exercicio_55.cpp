#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
int main() {
    srand(time(0));
    int ran = (rand() % 10) + 1;
    int ch, hp=4;
while(hp>0){
    cout << "Digite seu chute, um numero entre 1 e 10: " << endl;
    cin >> ch;

    if (ch == ran) {
        cout << "Parabens, vc acertou o numero sorteado!" << endl;
        break;
    }
    else {
        cout << "Voce errou o numero sorteado tente novamente! ("<<hp-1<<" tentativas restantes)" << endl;
        hp--;
    }
}
    return 0;
}
