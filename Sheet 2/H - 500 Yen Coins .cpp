#include <iostream>
using namespace std;

int main()
{
    int k, x;
    cin >> k >> x;
    k *= 500;
    cout << (k >= x ? "Yes" : "No");
}