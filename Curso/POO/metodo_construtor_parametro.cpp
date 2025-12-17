#include <iostream>
using namespace std; 
#include <ios>
#include <limits>
#include <cctype>

class Cookie{
    public:
        float preco;
        string sabor;
        string formato;

    Cookie(){
        printf("Cookie criado \n");

    }
    Cookie(string saboruser){
        formato = "Redondo";
        sabor = saboruser;
        if(saboruser == "Chocolate"){
            preco = 30.50;
        }else{
            preco = 20.50;
        }
    }
};

int main(){
    Cookie cookie1;
    Cookie cookie2("Chocolate");
    Cookie cookie3("Morango");

    cout << "Digite o preco: ";
    cin >> cookie1.preco;

    cout << "Digite o sabor: ";

    cin.sync();
    getline(cin, cookie1.sabor);

    cout << "Sabor do cookie: " << cookie1.sabor << endl;
    cout << "Preço: " << cookie1.preco << endl;
    cout << "Formato: " << cookie1.formato << endl;

    cout << "Sabor do cookie: " << cookie2.sabor << endl;
    cout << "Preço: " << cookie2.preco << endl;
    cout << "Formato: " << cookie2.formato << endl;

    cout << "Sabor do cookie: " << cookie3.sabor << endl;
    cout << "Preço: " << cookie3.preco << endl;
    cout << "Formato: " << cookie3.formato;
    return 0;
}