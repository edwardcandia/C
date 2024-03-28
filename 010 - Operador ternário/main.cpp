#include <iostream>
using namespace std;

double pessoas, renda, total;

int main()
{
    cout << "Digite o número de pessoas em sua casa: ";
    cin >> pessoas;

    cout << "Digite a renda total entre vocês: ";
    cin >> renda;

    total = renda/pessoas;
    
    (total<=1200) ? cout <<"terá direito ao auxílio." : cout <<"não terá direito ao auxílio.";
}
