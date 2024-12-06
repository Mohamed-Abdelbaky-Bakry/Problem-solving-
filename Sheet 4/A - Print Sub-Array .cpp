#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    for(int i=l;i<=r;i++) {
        cout<<arr[i]<<" ";
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

