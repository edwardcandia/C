#include <iostream>
using namespace std;

//&& (or), !(not), || (and)

double n;

int main()
{
    inicio:
    
    cout << "Digite um número que seja maior que 10 e menor que 20: ";
    cin >> n;
    
    if(n>10 && n<20){
        cout << "o número " << n << " é maior que 10 e menor que 20.";
    }
    else {
        goto inicio;
    }
}
