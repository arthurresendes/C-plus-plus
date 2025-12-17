#include <iostream>
using namespace std; 
#include <ios>
#include <limits>

class Cookie{
    public:
        float preco;
        string sabor;
};

int main(){
    Cookie cookie1;

    cout << "Digite o preco: ";
    cin >> cookie1.preco;

    cout << "Digite o sabor: ";

    cin.sync();
    getline(cin, cookie1.sabor);

    cout << "Sabor do cookie: " << cookie1.sabor << endl;
    cout << "Preço: " << cookie1.preco;
    return 0;
}