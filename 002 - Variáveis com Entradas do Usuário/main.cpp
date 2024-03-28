#include <iostream>

using namespace std;

int main(){
    int n;
    double n2;
    string name;
    bool boolean;

    cout << "enter an integer: ";
    cin >> n;
    
    cout << "enter a number: ";
    cin >> n2;
    
    cout << "type your name: ";
    cin >> name;
    
    cout << "enter 0 if you are a man or enter 1 if you are a woman: ";
    cin >> boolean;
    
    cout << "you chose " << n << " as your integer number." << endl;
    cout << "you chose " << n2 << " as your number." << endl;
    cout << "your name is " << name << "." <<endl;
    
    if (boolean == false)
    {
        cout << "you're a man.";
    } 
    
    if (boolean == true)
    {
        cout << "you're a woman.";
    }
    
}
