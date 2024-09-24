#include <iostream>
using namespace std;

int main()
{
    int v, t, s, d;
    cin>> v >> t >> s >> d;
    int disAtT = v * t;
    int disAtS = v * s;
    if (d < disAtT || d > disAtS)
        cout << "Yes";
    else
        cout << "No";
}