
#include <iostream>
using namespace std;
const int n = 105;
int arr[n];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        x--;
        int l = y - 1, r = arr[x] - y;
        if (x - 1 >= 0) arr[x - 1] += l;
        if (x + 1 < n) arr[x + 1] += r;
        arr[x] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

}

