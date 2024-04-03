#include <iostream>

using namespace std;

// ao atribuir "" na variavel de argumento da função, ela assume um valor vazio
// caso isso aconteça, não ocorrerá erro caso o argumento não seja passado, já que o compilador entende que é um valor vazio

void printa(string x=""){
    std::cout << "\n" << x << std::endl;
}

int main()
{
    printa();
    printa("Edward");
    return 0;
}