#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool checklucky = 1;
        int num = i;
        while (num > 0) {
            if (num % 10 == 4 || num % 10 == 7) {
                num /= 10;
            }
            else {
                checklucky = 0;
                break;
            }
        }
        if (checklucky == 1 && n % i == 0) {
            cout << "YES";
            return 0;
        }


    }
    cout << "NO";
    return 0;
}