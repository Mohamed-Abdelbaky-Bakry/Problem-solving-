#include <bits/stdc++.h>
using namespace std;
int fib(int n) {
    if (n <= 1)  return n;
    return fib(n - 1) + fib(n - 2);
}

void Solve() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

