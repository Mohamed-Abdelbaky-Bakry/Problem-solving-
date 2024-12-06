#include <iostream>
#include <algorithm>
using namespace std;
const int n = 300;
int a[n],b[n];

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int i = 0, j = n - 1;
        while (k--) {
            if (a[i] < b[j]) {
                a[i] = b[j];
            }
            else
                break;
            i++; j--;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << '\n';
    }
    return 0;
}