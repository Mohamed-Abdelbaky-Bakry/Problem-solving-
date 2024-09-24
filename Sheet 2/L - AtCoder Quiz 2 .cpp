#include <bits/stdc++.h>
using namespace std;
void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
int main(){
    Fast_IO();
    int X;
    cin>>X;
    if(X==0||X<40)cout<<40-X;
    else if(X==40||X<70)cout<<70-X;
    else if(X==70||X<90)cout<<90-X;
    else cout<<"expert";
}
