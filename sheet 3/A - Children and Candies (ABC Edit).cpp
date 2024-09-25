#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << sum << endl;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}
