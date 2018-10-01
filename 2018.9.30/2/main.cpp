#include <bits/stdc++.h>
using namespace std;
int a[7][3];
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
        dfs(l+1);
        if (f)  return;
        swap(a[i][1],a[i][2]);
        dfs(l+1);
        used[i]=false;
    }
//    for (int i=l;i<=6;i++)  {
//        dfs(l+1);
//        if (f)  return;
//        swap(a[i][1],a[i][2]);
//        dfs(l+1);
//        if (f)  return;
//    }
}
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   {
        for (int i=1;i<=6;i++)
            scanf("%d%d",&a[i][1],&a[i][2]);
        dfs(1);
        if (f)  printf("YES\n");
        else printf("NO\n");
        f=false;
        fill(used,used+10,false);
    }
    return 0;
}
