#include <bits/stdc++.h>
#define N 100005
using namespace std;
int x[N],y[N],lst[N];
bool cmp(int a,int b)   {
    return x[a]>x[b];
}
int main()  {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=2*n+1;i++)  {
        scanf("%d%d",&x[i],&y[i]);
        lst[i]=i;
    }
    sort(lst+1,lst+2*n+2,cmp);
    printf("%d\n",lst[1]);
    for (int i=2;i<2*(n+1);i+=2)    {
        if (y[lst[i]]>y[lst[i+1]])    printf("%d\n",lst[i]);
        else    printf("%d\n",lst[i+1]);
    }
    return 0;
}
