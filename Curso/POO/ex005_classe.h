#include <iostream>
using namespace std;
#include <ios>
#include <limits>

class Celular{
    private:
        string marca;
        float preco;
        int quantidade;
    public:
        string getMarca(){
            return marca;
        }
        float getPreco(){
            return preco;
        }
        int getQuantidade(){
            return quantidade;
        }

        float getPrecoTotal(){
            return preco * quantidade;
        }

        void setMarca(string novaMarca){
            marca = novaMarca;
        }
        void setPreco(float novoPreco){
            preco = novoPreco;
        }
        void setQuantidade(int novaQuantidade){
            quantidade = novaQuantidade;
        }
};
