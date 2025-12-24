#include <iostream>
using namespace std;


class Calculadora{
    public:
        int somar(int n1, int n2){
            return n1 + n2;
        }
        int somar(int n1, int n2, int n3){
            return n1 + n2 + n3;
        }
};

int main(){
    Calculadora cal1;
    cout << "Soma com 2 inteiros: " << cal1.somar(5,5) << endl;
    cout << "Soma com 3 inteiros: " << cal1.somar(5,5,5) << endl;
    return 0;
}