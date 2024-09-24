#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s == "RRR")
        cout << 3;
    else if (s == "SRR" || s == "RRS")
        cout << 2;
    else if (s == "SSS")
        cout << 0;
    else
        cout << 1;
}