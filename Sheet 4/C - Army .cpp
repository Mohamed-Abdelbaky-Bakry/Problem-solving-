#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int n,sum=0;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n-1; i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; i++) {
        sum += arr[i];
    }
    cout << sum;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

