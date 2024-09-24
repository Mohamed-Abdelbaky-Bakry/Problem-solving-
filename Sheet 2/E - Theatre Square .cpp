#include <iostream>
using namespace std;

int main()
{
    long long m, n, a;
    cin >> m;
    cin >> n;
    cin >> a;
    long long width = m / a;
    long long height = n / a;
    if (m % a > 0)
        width++;
    if (n % a > 0)
        height++;
    cout << width * height;
}