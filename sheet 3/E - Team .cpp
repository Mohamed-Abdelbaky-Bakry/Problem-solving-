#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int c;
    cin>>c;
    int cnt=0;
    while(c--) {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1 && y==1 || x==1 && z==1 || y==1 && z==1) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

