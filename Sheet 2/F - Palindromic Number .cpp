#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int ones = n % 10;
    if (hundreds == ones)
        cout << "Yes";
    else
        cout << "No";
    
}