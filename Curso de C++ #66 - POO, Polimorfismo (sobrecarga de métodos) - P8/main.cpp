#include <iostream>

using namespace std;

class Aluno {
    private:
    int cpf, idade;
    string nome, materiaP;
    
    public:

    Aluno(){
        idade=21;
        cpf=777;
        nome="recadas";
        materiaP="Engenharia de Software 2";
    }
    
    Aluno(int aIdade, int aCpf, string aNome, string aMateria){
        this->idade = aIdade;
        this->cpf = aCpf;
        this->nome = aNome;
        this->materiaP = aMateria;
    }
    
    void returnDados(){
        cout << idade << endl;
        cout << cpf << endl;
        cout << nome << endl;
        cout << materiaP << endl;
    }
};

int main()
{
    Aluno ads;
    ads.returnDados();
    
    Aluno ads2(291, 20000, "gamas", "lineuzada");
    ads2.returnDados();
    
    Aluno *ads3 = new Aluno();
    ads3->returnDados();
    
    Aluno *ads4 = new Aluno(30, 90000, "dududu", "Estatistica");
    ads4->returnDados();

    return 0;
}