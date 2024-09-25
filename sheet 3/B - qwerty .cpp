#include <bits/stdc++.h>
using namespace std;

void Solve() {
    for (int i = 0; i < 26; i++) {
        int p;
        cin >> p;
        cout << char(p - 1 + 'a');
    }
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}
