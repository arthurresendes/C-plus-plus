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

int main(){
    Celular cell1;
    cell1.setMarca("Android");
    cell1.setPreco(1782.25);
    cell1.setQuantidade(5);

    cout << "Tipo celular: " << cell1.getMarca() << endl;
    cout << "Preço : " << cell1.getPreco() << endl;
    cout << "Quantidade : " << cell1.getQuantidade() << endl;
    cout << "Preço total (preco x quantidade) : " << cell1.getPrecoTotal() << endl;
    

    return 0;
}