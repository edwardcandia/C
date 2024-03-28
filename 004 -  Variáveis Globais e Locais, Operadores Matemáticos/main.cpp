#include <iostream>
using namespace std;

//operadores matemáticos: + - / * % ()

//variáveis globais
double n1, n2;

int main()
{
    //variáveis locais
    double n3, n4;
    
    cout << "Digite um número: ";
    cin >> n1;
    
    cout << "Digite um número: ";
    cin >> n2;
    
    cout << "Digite um número: ";
    cin >> n3;
    
    cout << "Digite um número: ";
    cin >> n4;
    
    cout << "A média dos números digitados é: " << (n1+n2+n3+n4)/4 << endl;
    return 0;
}