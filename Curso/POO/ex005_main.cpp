#include <iostream>
using namespace std;
#include <ios>
#include <limits>
#include "ex005_classe.h"

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