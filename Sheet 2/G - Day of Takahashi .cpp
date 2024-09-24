#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // read input

    if (b == a || a < b)
        cout << a;
    else
        cout << a - 1;
}