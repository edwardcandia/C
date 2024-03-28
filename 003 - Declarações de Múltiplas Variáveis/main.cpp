#include <iostream>
using namespace std;

#define menu cout<<"SEU ENDEREÇO: \n";

int main()
{
    int numero=777, cep=12380000;
    string rua="arnaldo tironi", bairro="jardim barolo";

    //chamando constante "MENU" da linha 4.
    menu
    //dados das linhas 8 e 9.
    cout << numero << "\n" << cep << "\n"  << rua << "\n"  << bairro << "\n"  << endl;
    return 0;
}