#include <iostream>
using namespace std;


int main(){
    int a,b,c,soma = 0;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;

    soma = a + b + c;
    cout << "Soma: " << soma << endl;

    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Ola " << nome;
    return 0;
}