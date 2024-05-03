#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> gap, gap2;
    list<string>::iterator it;
    
    int tam=10;
    
    for(int i=0; i<tam; i++){
        string x;
        std::cout << "Type: ";
        std::cin >> x;
        gap.push_front(x);
    }
    
    it=gap.begin();
    advance(it, 1);
    gap.insert(it, "DOG");
    
    // gap.erase(--it);
    
    // gap2.merge(gap);
    
    std::cout << "SIZE OF LIST: " << gap.size() << std::endl;
    
    tam = gap.size();
    
    for(int i=0; i<tam; i++){
        std::cout << gap.front() << std::endl;
        gap.pop_front();
    }
}