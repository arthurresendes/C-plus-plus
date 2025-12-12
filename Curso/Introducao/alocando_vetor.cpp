#include <iostream>
#include <new>
using namespace std;


int main(){
    int tam;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    int *vet = new int[tam];

    for(int i =1; i <= tam;i++){
        vet[i] = i;
        cout << "Valor [" << i << "] :" << vet[i] << endl;
    }
    return 0;
}