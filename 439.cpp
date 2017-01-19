#include<stdio.h>
#include<iostream>
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
#include<utility>
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)

int dp[10][10]={0};
int kx[8]={-1,1,-2,2,-2,2,-1,1};
int ky[8]={2,2,1,1,-1,-1,-2,-2};

int main()
{
    //freopen("in.txt","r",stdin);

    int a,b;
    char c,d;
    while(scanf("%c%d %c%d\n",&c,&a,&d,&b)==4)
    {
        //memset(dp,0,sizeof dp);
        int sx=c-'a';
        int sy=--a;
        int dx=d-'a';
        int dy=--b;
        //printf("%d %d %d %d \n",sx,sy,dx,dy);
        queue<pair<int,int> >q;
        pair<int,int>s=make_pair(sx,sy);
        q.push(s);
        dp[sx][sy]=0;
        int x,y;
        while(!q.empty())
        {
            pair<int ,int >p=q.front();
             x=p.first;
             y=p.second;
            if(x==dx&&y==dy)break;
            if((x>=0&&x<8)&&(y>=0&&y<8))
                for(int i=0;i<8;i++)
                {
                    if((x+kx[i]>=0&&x+kx[i]<8)&&(y+ky[i]>=0&&y+ky[i]<8))
                    {
                        dp[x+kx[i]][y+ky[i]]=dp[x][y]+1;
                        q.push(make_pair(x+kx[i],y+ky[i]));
                    }

                }

            q.pop();


        }
        if(sx==dx&&sy==dy)dp[x][y]=0;
        printf("To get from %c%d to %c%d takes %d knight moves.\n",c,++a,d,++b,dp[x][y]);

    }



    return 0;

}
