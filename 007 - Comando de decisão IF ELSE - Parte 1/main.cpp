#include <iostream>
using namespace std;

string name;

int main()
{
    cout << "QUAL O SEU NOME?: ";
    cin >> name;

    if (name == "dudu"){
        cout << "você é o dukão!";
    }
    else {
        cout << "você não é o dukão.";
    }
    
    return 0;
}