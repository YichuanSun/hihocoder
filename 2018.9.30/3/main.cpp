#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100],cnt;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    if (n==1)   {cout<<1<<endl;return 0;}
    for (int i=9;i>=2;i--)  {
        while (n%i==0)  {
            n/=i;
            a[cnt++]=i;
        }
    }
    if (cnt==0) cout<<-1;
    else for (int i=cnt-1;i>=0;i--) cout<<a[i];
    cout<<endl;
    return 0;
}
