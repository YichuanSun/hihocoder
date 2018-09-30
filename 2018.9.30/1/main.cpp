#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,m,mx,mi,mmx,mmi;
    scanf("%d%d",&n,&m);
    if (n>m)    mx='A',mi='B';
    else mx='B',mi='A';
    mmx=max(n,m),mmi=min(n,m);
    if (mmx==0&&mmi==0) printf(" \n");
    else if (1.0*mmx/(mmi+1)>2)  printf("-1\n");
    else {
        if (mmx-mmi<2)    {
            for (int i=1;i<=mmi;i++)
                printf("%c%c",mi,mx);
            for (int i=1;i<=mmx-mmi;i++)    printf("%c",mx);
            printf("\n");
        }
        else    {
            int a=mmx,b=mmi;
            while (a>b&&a>=2&&b>0) {
                printf("%c%c%c",mx,mx,mi);
                a-=2,b--;
            }
            while (a&&b)    {
                printf("%c%c",mx,mi);
                a--,b--;
            }
            while (a)  printf("%c",mx),a--;
            while (b)  printf("%c",mi),b--;
            printf("\n");
        }
    }
    return 0;
}
