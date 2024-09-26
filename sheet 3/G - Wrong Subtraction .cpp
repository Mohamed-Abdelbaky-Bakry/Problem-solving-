#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int n,k;
    cin>>n>>k;
    while(k--) {
        if(n%10!=0) n--;
        else n/=10;

    }
    cout<<n<<endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

