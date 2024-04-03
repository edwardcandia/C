#include <iostream>

int main()
{
    int matriz[2][2];
    int i, j;
    for(i=0; i < 2; i++){     
           for(j=0; j < 2; j++){
            std::cin >> matriz[i][j];}
        
    }
    
    for(i=0; i < 2; i++){     
           for(j=0; j < 2; j++){
            std::cout << matriz[i][j] << std::endl;}
        
    }
    
    return 0;
}
