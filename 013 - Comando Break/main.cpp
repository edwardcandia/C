#include <iostream>

int main()
{
    int i=0;
    
    while (i<=1000){
        std::cout<<i<<"\n";
        if (i==750){
            break;
        }
        i++;

    }
    return 0;
}