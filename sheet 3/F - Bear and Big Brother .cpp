#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(b>=a) {
        b*=2;
        a*=3;
        cnt++;
    }
    cout<<cnt;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

