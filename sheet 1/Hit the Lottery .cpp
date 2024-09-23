#include <iostream>
using namespace std;

int main()
{
    int cost;
    cin >> cost;

    int card1 = cost / 100;
    int left = cost % 100;

    card1 += left / 20;
    left = left % 20;

    card1 += left / 10;
    left = left % 10;

    card1 += left / 5;
    left = left % 5;

    card1 += left ;

    cout << card1;
}
