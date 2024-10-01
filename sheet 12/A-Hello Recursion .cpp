#include <bits/stdc++.h>
using namespace std;
int summation(int idx,int arr[],int n) {
    if(idx==n) return 0;
    return arr[idx] + summation(idx+1 ,arr,n);
}

void Solve() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        cout<<"Case "<<i+1<<": "<<summation(0,arr,n)<<endl;
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

