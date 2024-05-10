#include <iostream>

using namespace std;

struct Player{
  int age, numberShirt, ovr;
  string name, foot;
  
};

int main()
{
    
    Player edward;
    
    edward.name="Edward L. R. Cândia";
    edward.foot="right";
    edward.age=20;
    edward.numberShirt=7;
    edward.ovr=84;
    
    
    cout << "Name: " << edward.name << endl;
    cout << "Foot: " << edward.foot << endl;
    cout << "Age: " << edward.age << endl;
    cout << "Number Shirt: " << edward.numberShirt << endl;
    cout << "Overall: " << edward.ovr << endl;
    
    return 0;
}