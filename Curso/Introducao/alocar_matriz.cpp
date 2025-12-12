#include <iostream>
#include <new>
using namespace std;


int main(){
    int linha,coluna;

    cout << "Digite o tamanho de linhas: ";
    cin >> linha;
    cout << "Digite o tamanho de colunas: ";
    cin >> coluna;

    int** matriz = new int* [linha];


    for(int i =0; i <= linha;i++){
        matriz[i] = new int[coluna];
    }

    for(int i =1; i <= linha;i++){
        for(int j = 1; j <= coluna; j++){
            matriz[i][j] = j;
            cout << "["<< matriz[i][j] << "] ";
        }
        cout << endl;
    }


    return 0;
}