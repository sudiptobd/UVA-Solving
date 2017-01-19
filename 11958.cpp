#include<stdio.h>
#include<iostream>
#include<utility>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<deque>
#include<vector>
#include<ctype.h>
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)

int bad(int ah,int am,int bh,int bm)
{
    int rh,rm;
    if(bm>am)
    {
        rm=am+60-bm;
        bh++;
    }
    else rm=am-bm;

    if(bh>ah)rh=ah+24-bh;
    else rh=ah-bh;

    return 60*rh+rm;
}

int main()
{
//freopen("in.txt","r",stdin);

    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);

        int car_h,car_m;
        scanf("%d:%d",&car_h,&car_m);

        int mini=999999999;
        for(int j=1;j<=n;j++)
        {
            int start_h,start_m;
            scanf("%d:%d",&start_h,&start_m);

            int time;
            scanf("%d",&time);

            time+=bad(start_h,start_m,car_h,car_m);
            if(time<mini)mini=time;
        }
        printf("Case %d: %d\n",i,mini);


    }

    return 0;

}
