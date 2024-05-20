#include <iostream>

using namespace std;

int main()
{
    string list[5];
    string *pointer;
    int i;
    
    for(i=0; i<5; i++){
        cout << "Write: ";
        cin >> list[i];
    }

    for(i=0; i<5; i++){
        pointer = &list[i];
        cout << "Address: " << pointer << endl;
    }
    
    for(i=0; i<5; i++){
        pointer = &list[i];
        cout << "Content: " << *pointer <<endl;
    }

    return 0;
}
