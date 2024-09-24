#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int t;
    cin >> t;
    while (t--) {
        int n,r;
        cin >> n >> r;
        set<int,greater<int>> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        int cnt =0;
        for(auto x:s){
            if((x-(cnt*r))>0) cnt++;
        }
        cout << cnt << '\n';
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