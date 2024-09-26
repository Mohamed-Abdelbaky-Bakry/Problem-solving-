#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int x;
    cin >> x;
    int cnt = 0;
    while (x--) {
        string s;
        cin >> s;
        if(s=="X++"||s=="++X"||s=="x++"||s=="++x") cnt++;
        else cnt--;
    }
    cout << cnt << endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

