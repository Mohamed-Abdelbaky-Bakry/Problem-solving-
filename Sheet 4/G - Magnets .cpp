#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++) {
        cin>>arr[i];
    }
    int cnt=1;
    for(int i=0;i<t-1;i++) {
        if(arr[i]==arr[i+1]){
            cnt++;
        }else {
            break;
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

