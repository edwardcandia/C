#include <iostream>

using namespace std;

void fib(int n1=1, int n2=1){
    int n3;
    std::cout << n1 << std::endl;
    
    if (n1<=300){
        n3 = n1+n2;
        fib(n2,n3);
    }
}

int main()
{
    fib();
    return 0;
}