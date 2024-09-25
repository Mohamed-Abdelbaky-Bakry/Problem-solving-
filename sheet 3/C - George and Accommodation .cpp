#include <bits/stdc++.h>
using namespace std;

void Solve() {
  int n;
  cin>>n;
  int cnt=0;
  while(n--) {
    int p,q;
    cin>>p>>q;
    if(q-p>=2) cnt++;
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

