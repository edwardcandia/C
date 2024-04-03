#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    argc = 2;
    argv[1] = "cachorrao";
    argv[2] = "gato";
    
    if (argc > 1){
        if (argv[1] == "cachorro"){
            std::cout << "auau" << std::endl;
        }
        else if(argv[2] == "gato") {
            std::cout << "miau" << std::endl;
        }
        else {
            std::cout << "nenhum animal" << std::endl;
        }
    }
}