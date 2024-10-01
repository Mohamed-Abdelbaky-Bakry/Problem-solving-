#include <bits/stdc++.h>
using namespace std;
int super(long long num){
    if(num<10) return num;
    long long ret=0;
    while(num) {
        ret+=num%10;
        num/=10;
    }
    return super(ret);
}

void Solve() {
    string n;
    int k;
    cin>>n>>k;
    long long sum =0 ;
    for(int i=0;i<n.size();i++)
        sum+=(n[i]-'0')*k;
    cout<<super(sum);
}
int main()
{
    int bk = 1;
    // cin>>bk;
    while (bk--)
        Solve();
    return 0;
}

