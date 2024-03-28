#include <iostream>
using namespace std;

int x;
string msg;

int main()
{
    cout<<"\t1) Abrir e ler texto."<<endl;
    cout<<"\t2) Criar e gravar texto."<<endl;
    cout<<"\t3) Sair."<<endl;
    cout<<"\tEscolha a opção: ";
    cin >> x;
    
    switch(x){
        case 1:
            cout << "\tTROLLEI!"<< endl;
            break;
        
        case 2:
            cout << "\tDigite sua mensagem: " << endl;
            cin >> msg;
            cout << "\tSua mensagem: " << msg << endl;
            break;
        
        case 3:
            cout << "\tSaiu do programa..."<< endl;
            break;
        default:
            cout << "Opção Inválida, tente novamente.";
    }
}
