#include <iostream>

using namespace std;

void multiplica (int n1, int n2){
    std::cout << n1 << "x" << n2 << "=" << (n1*n2) << std::endl;
}

void multiplica(){
    int n1=1, n2=3;
    std::cout << n1 << "x" << n2 << "=" << (n1*n2) << std::endl;
}

int main()
{
    multiplica(1,2);
    multiplica();

    return 0;
}