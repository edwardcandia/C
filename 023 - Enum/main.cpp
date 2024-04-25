#include <iostream>

// This program will select weapons and show how much cost to buy in Valorant. (using Enum)

int main()
{
    enum weapons {vandal=2900, sheriff=800, ghost=500, classic=0};
    weapons selectWeapon;
    
    selectWeapon = vandal;
    std::cout << selectWeapon << std::endl;
    
    selectWeapon = sheriff;
    std::cout << selectWeapon << std::endl;
    return 0;
}
