#include <bits/stdc++.h>
using namespace std;
int a[7][3],x[10],y[10];
bool f,used[10];
void dfs(int l) {
    if (f)  return;
    if (l==7)   {
        if (a[1][1]==a[2][2]&&a[2][2]==a[5][1])
            if (a[1][2]==a[3][1]&&a[3][1]==a[5][2])
                if (a[2][1]==a[4][2])
                    if (a[3][2]==a[6][1])
                        f=true;
        return;
    }
    for (int i=1;i<=6;i++)  {
        if (used[i])    continue;
        used[i]=true;
        a[l][1]=x[i],a[l][2]=y[i];
        dfs(l+1);
        a[l][1]=y[i],a[l][2]=x[i];
        dfs(l+1);
        used[i]=false;
    }
}
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   {
        for (int i=1;i<=6;i++)
            scanf("%d%d",&x[i],&y[i]);
        dfs(1);
        if (f)  printf("YES\n");
        else printf("NO\n");
        f=false;
        fill(used,used+10,false);
    }
    return 0;
}
