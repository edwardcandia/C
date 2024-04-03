#include <iostream>

using namespace std;


void conversorTemperatura(float graus){
    float fahrenheit = ((graus * (9/5)) + 32);
    std::cout << graus << " graus celsius convertidos hein fahrenheit: "<< fahrenheit << std::endl;
}

int main() {
    
    conversorTemperatura(1);
    
    return 0;
}