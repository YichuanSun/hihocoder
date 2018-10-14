#include <bits/stdc++.h>
#define N 100005
using namespace std;
int boss[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,d;
    boss[1]=1;
    cin>>n>>d;
    for (int i=2;i<=n;i++)
        cin>>boss[i];
    for (int i=1;i<=n;i++)    {
        int level=d,now=i,fg=0;
        while (level--) {
            now=boss[now];
            if (now==1&&level!=0)   fg=1;
        }
        if (fg) cout<<-1<<endl;
        else cout<<now<<endl;
    }
    return 0;
}
