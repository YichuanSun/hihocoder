#include <bits.stdc++.h>
#define N 200005
using namespace std;
struct node{
    int a,b;
    node(int a1,int b1){a=a1;b=b1;}
};
node nds[N];
int cmp(node A,node B)  {
    if (A.a==B.a)   return A.b>B.b;
    return A.a>B.a;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,asum=0,bsum=0,asp=0,bsp=0;
    cin>>n;
    for (int i=0;i<2*n+1;i++)  {
        cin>>ta>>tb;
        nds[i]=node(ta,tb);
    }
    sort(nds,nds+2*n+1,cmp);
    for (int i=0;i<=n;i++)  {
        asum+=nds[i].a;
        bsum+=nds[i].b;
    }
    for (int i=n+1;i<2*n+1;i++) {
        asp+=nds[i].a;
        bsp+=nds[i].b;
    }
    return 0;
}



