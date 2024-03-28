#include <iostream>
using namespace std;

string name;

int main()
{   inicio:
    cout << "QUAL O SEU NOME?: ";
    cin >> name;

    if (name == "dudu"){
        cout << "você é o dukão!"<< endl;
    }
    else {
        cout << "você não é o dukão."<< endl;
    }
    
    goto inicio;
    
    return 0;
}