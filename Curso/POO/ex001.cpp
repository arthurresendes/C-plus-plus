#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Coxinha{
    public:
        string sabor;
    
    Coxinha(){
        printf("Bem vindo a coxinha delivery \n");
    }
    Coxinha(string escolhauser){
        sabor = escolhauser;
    }
};



int main(){
    Coxinha coxinha1;
    Coxinha coxinha2("Frango Catupiry");

    cout << "Informe o sabor: ";
    cin.sync();
    getline(cin,coxinha1.sabor);

    cout << "Sabor Coxinha 1: " << coxinha1.sabor << endl;
    cout << "Sabor Coxinha 2: " << coxinha2.sabor << endl;
    



    return 0;
}