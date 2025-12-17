#include <iostream>
using namespace std; 
#include <ios>
#include <limits>

int main(){
    char frase[50];

    cout << "Digite uma frase: ";
    cin.sync(); // Sincroniza com tempo atual
    cin.getline(frase,80);

    cout << "\nFrase: " << frase << "\n";
    return 0;
}