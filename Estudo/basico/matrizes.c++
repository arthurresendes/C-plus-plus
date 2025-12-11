#include <iostream>

int main()
{
    int matriz [3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    std::cout<<"Primeira linha: " << matriz[0][0] << matriz[0][1] << matriz[0][2] << std::endl;
   
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3 ; j++){
            std::cout << "O elemento na posicao [" << i << "][" << j << "] eh: " << matriz[i][j] << std::endl;
        }
    }

    return 0;
}