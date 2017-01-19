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

int r,c;
char ara[105][105];

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

bool visit[105][105];

void call(int i,int j)
{

    if(i<0||i>=r)return;
    if(j<0||j>=c)return;
    //printf("%d+%d ",i,j);
    if(visit[i][j])return;
    visit[i][j]=true;
    if(ara[i][j]=='*')return;
    call(i-1,j);
    call(i-1,j+1);
    call(i,j+1);
    call(i+1,j+1);
    call(i+1,j);
    call(i+1,j-1);
    call(i,j-1);
    call(i-1,j-1);
}

int main()
{
//freopen("in.txt","r",stdin);

    while((r=sc())&&(c=sc()))
    {
        getchar();
        for(int i=0;i<r;i++)gets(ara[i]);
        memset(visit,false,sizeof visit);

        int count=0;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                if(visit[i][j])continue;
                if(ara[i][j]=='*')
                {
                    visit[i][j]=true;
                    continue;
                }
                if(ara[i][j]=='@')
                {
                    count++;
                    call(i,j);

                }
            }
        printf("%d\n",count);
    }

    return 0;

}
