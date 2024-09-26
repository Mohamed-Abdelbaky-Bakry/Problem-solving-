#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int x,s;
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            cin>>x;
            if(x==1) {
                s = abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<s<<endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

