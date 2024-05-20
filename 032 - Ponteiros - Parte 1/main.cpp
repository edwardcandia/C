#include <iostream>

using namespace std;

int main()
{
    string name;
    string *pointer;
    
    name = "Edward";
    pointer = &name;
    
    cout << "Adress: " << pointer << endl;
    cout << "Adress: " << &name << endl; // other way to print adress using &
    cout << "Content: " << *pointer << endl;
    
    *pointer="Dudu";
    
    cout << "Adress: " << pointer << endl;
    cout << "Adress: " << &name << endl;
    cout << "Content: " << *pointer << endl;
    
    return 0;
}