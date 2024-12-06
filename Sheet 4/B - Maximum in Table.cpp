#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 1;
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    cout << arr[n - 1][n - 1] << endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

