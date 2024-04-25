#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> rankArmy;
    
    rankArmy.push("Second Lieutenant");
    rankArmy.push("First Lieutenant");
    rankArmy.push("Captain");
    rankArmy.push("Major");
    rankArmy.push("Lieutenant Colonel");
    rankArmy.push("Colonel");
    rankArmy.push("Brigadier General");
    rankArmy.push("Major General");
    rankArmy.push("Lieutenant General");
    rankArmy.push("General");
    
    std::cout << "Army Officer Ranks" << std::endl;
    std::cout << "Size of stack: "<< rankArmy.size() << "\n" << std::endl;
    std::cout << "Top Army Officer: "<< rankArmy.top()<< "\n" << std::endl;
    
    rankArmy.pop(); //removing the last item
    
    std::cout << "Army Officer Ranks" << std::endl;
    std::cout << "New size of stack: "<< rankArmy.size() << "\n" << std::endl;
    std::cout << "New Top Army Officer: "<< rankArmy.top()<< "\n" << std::endl;
    
    return 0;
}
