#include <iostream>
using namespace std;

int main()
{
    int gold, silver;
    cin >> gold;
    cin >> silver;
    if (gold >= 0 && silver == 0)
        cout << "Gold";
    else if (gold == 0 && silver >= 0)
        cout << "Silver";
    else
        cout << "Alloy";
}
