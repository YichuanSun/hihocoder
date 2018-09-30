#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vii;
bool flag1;
void read_input();
int main()  {
    int n;
    while (n--) {
        read_input();
        if (flag1)  {
            printf("NO\n");
//            continue;
        }
        else    {

        }
        flag1=false;
        vii.clear();
    }
    return 0;
}

void read_input()   {
    pair<int,int> p;
    for (int i=1;i<=6;i++)  {
        scanf("%d%d",p.first,p.second);
        if (abs(p.first-p.second)>1)    flag1=true;
        vii.push_back(p);
    }
}



