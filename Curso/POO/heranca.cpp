#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Automovel{
    private:
        string marca;
    public:
        string getMarca(){
            return marca;
        }
        void setMarca(string novaMarca){
            marca = novaMarca;
        }
    protected:
        void souAutomovel(){
            cout << "Sou um automovel";
        }
};

class Carro: public Automovel{
    private:
        float preco;
    
    public:
        Carro(){
            souAutomovel();
        }

        float getPreco(){
            return preco;
        }
        void setPreco(float novoPreco){
            preco = novoPreco;
        }

};

int main(){
    Automovel aut1;
    Carro car1;
    aut1.setMarca("Ferrari");
    cout << "Marca: " << aut1.getMarca() << endl;

    car1.setMarca("Mercedes");
    car1.setPreco(2000000000.21);
    cout << "Marca car1: " << car1.getMarca() << endl;
    cout << "Preço car1: " << car1.getPreco() << endl;

    return 0;
}