#include <iostream>

using namespace std;

class Pessoa {
    public:
    
    void setNome(string aNome){
    this->nome = aNome;
    }
    
    void setIdade(int aIdade){
    this->idade = aIdade;
    }
    
    void setCpf(int aCpf){
    this->cpf = aCpf;
    }
    
    void mostraDados() {
    std::cout << nome << std::endl;
    std::cout << idade << std::endl;
    std::cout << cpf << std::endl;
    }
    
    private:
    int idade, cpf;
    string nome;
};

class Aluno:public Pessoa {
    
};

int main()
{
    //Não usando ponteiro
    Aluno amaral;
    amaral.setNome("Amaral");
    amaral.mostraDados();
    //Usando ponteiro
    Aluno *x = new Aluno();
    x->setNome("Bryan");
    x->mostraDados();
    
    

    return 0;
}