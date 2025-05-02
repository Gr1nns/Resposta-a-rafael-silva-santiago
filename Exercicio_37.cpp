#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string genero;
    float sal, h1, h2, h3, m1, m2, m3;
    int anos;

    cout << "Qual o seu salario atual? ";
        cin >> sal; 
    cout << "Voce e (homem) ou (mulher)? ";
        cin >> genero; 
    cout << "A quantos anos vc trabalha na empresa? ";
        cin >> anos;

        m1 = sal + (sal * 0.05);
        m2 = sal + (sal * 0.12);
        m3 = sal + (sal * 0.23);
        h1 = sal + (sal * 0.03);
        h2 = sal + (sal * 0.12);
        h3 = sal + (sal * 0.25);

        if (genero == "mulher" && anos < 15) {
            cout << "O seu novo salario sera de: R$"<<fixed<<setprecision(2)<< m1 << endl;
        } 
        else if (genero == "mulher" && anos >= 15 && anos <= 20) {
            cout << "O seu novo salario sera de: R$" << fixed << setprecision(2)<< m2 << endl;
        } 
        else if (genero == "mulher" && anos > 20) {
            cout << "O seu novo salario sera de: R$" << fixed << setprecision(2)<< m3 << endl;
        }

        // para ficar bem clara a divisao para quem for corrigir( R. S. S.)

        else if (genero == "homem" && anos < 20) {
            cout << "O seu novo salario sera de: R$" << fixed << setprecision(2) << h1 << endl;
        }
        else if (genero == "homem" && anos >= 20 && anos <= 30) {
            cout << "O seu novo salario sera de: R$" << fixed << setprecision(2) << h2 << endl;
        }
        else if (genero == "homem" && anos > 30) {
            cout << "O seu novo salario sera de: R$" << fixed << setprecision(2) << h3 << endl;
        }
    return 0;
}
