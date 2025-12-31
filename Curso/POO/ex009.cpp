#include <iostream>
using namespace std;


class Menu{
    public:
        void mostrarOpcoes(){};
};


class MenuCliente: public Menu{
    public:
        void mostrarOpcoes(){
            cout << "0 -  Sair";
            cout << "1 -  Logar";
            cout << "0 -  Cadastrar";
        }
};

class MenuAdministrador: public Menu{
    public:
        void mostrarOpcoes(){
            cout << "0 -  Sair";
            cout << "1 -  Logar";
            cout << "0 -  Cadastrar";
        }
};

int main(){
    Menu men;
    MenuCliente menC;
    MenuAdministrador menA;

    men.mostrarOpcoes();
    menC.mostrarOpcoes();
    menA.mostrarOpcoes();

    return 0;
}