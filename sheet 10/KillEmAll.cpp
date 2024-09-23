#include <bits/stdc++.h>
using namespace std;

    void Solve() {
        int n;
        cin>>n;
        vector<string>vec(n);
        map<string,int>pr;
        for(int i=0;i<n;i++)
            cin>>vec[i];

        for(int i=n-1;i>=0;i--) {
            if(pr[vec[i]]==0) {
                cout<<vec[i]<<'\n';

            }
            pr[vec[i]]++;
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