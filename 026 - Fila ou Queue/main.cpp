#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> rankArmy;
    
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
    


    while (!rankArmy.empty()){
        
        std::cout << "Size of stack: "<< rankArmy.size() << std::endl;
        std::cout << "Top Army Officer: "<< rankArmy.back()<< std::endl;
        std::cout << "Lower Army Officer: "<< rankArmy.front()<< std::endl;
        
        rankArmy.pop();
    }
    
    if (rankArmy.empty()){

        std::cout << "Empty Queue." << std::endl;
        
    }

    
    return 0;
}