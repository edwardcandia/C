#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> gap, test;
    list <int>::iterator it;
 
    for (int i=0; i<=10; i++){
        gap.push_front(i);
    }
    
    std::cout << "Size of List: " << gap.size() << std::endl;
   
    it = gap.begin();
    gap.sort();
    gap.reverse();
    gap.insert(it,777);
    
    for (int i=0; i<=10; i++){
        
        std::cout << gap.front() << std::endl;
        gap.pop_front();
    }

    std::cout << "Size of List: " << gap.size() << std::endl;
}