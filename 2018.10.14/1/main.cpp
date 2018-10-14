#include <bits/stdc++.h>
using namespace std;
string s;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ans=0;
    cin>>s;
    if ((int)s.size()==1)   {cout<<0<<endl;return 0;}
    for (int i=1;i<(int)s.size();i++)   {
        int t=i;
        while (s[t]==s[t-1])    t++;
        ans+=(t-i+1)/2;
        i=t;
    }
    cout<<ans<<endl;
    return 0;
}
