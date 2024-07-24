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
    cout << nome << endl;
    cout << idade << endl;
    cout << cpf << endl;
    }
    
    private:
    int idade, cpf;
    string nome;
};

class Aluno {
    public:
    void setMediaNotas(float aMedia){
        this->media = aMedia;
    }
    void mostraMedia(){
        cout << media << endl;
    }
    private:
    float media;
};

class Bolsista:public Pessoa, public Aluno {

}; 

int main()
{
    Bolsista *amaral = new Bolsista();
    amaral->setMediaNotas(9.3);
    amaral->setNome("Gabriel Amaral");
    amaral->mostraDados();
    amaral->mostraMedia();

    return 0;
}