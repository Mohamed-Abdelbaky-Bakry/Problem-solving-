#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int n , cn1=0,cn2=0,cn3=0,cnc=0;
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        int s;
        cin >> s;
        if (s == 1) cn1++;
        else if (s == 2) cn2++;
        else if (s == 3) cn3++;
        else cnc++;
    }
    cnc += cn3;
    if (cn3 >= cn1) {

        cn1 = 0;
    }
    else {

        cn1 -= cn3;
    }
    cnc += cn2 / 2;
    if (cn2 % 2 == 0) {

        cn2 = 0;
    }
    else {
        cnc++;
        cn1 -= 2;
    }
    if (cn1 > 0) {
        cnc += ceil(cn1 / 4.0);
    }
    cout << cnc;
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

