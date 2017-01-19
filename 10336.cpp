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

char ara[500][500];
bool visit[500][500];
int r,c;

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

void call(int i,int j,char x)
{
    if(i<0||i>=r)return;
    if(j<0||j>=c)return;
    if(visit[i][j])return;
    if(ara[i][j]!=x)return;
    visit[i][j]=true;

    call(i-1,j,x);
    call(i,j+1,x);
    call(i+1,j,x);
    call(i,j-1,x);

}

int main()
{
//freopen("in.txt","r",stdin);

    int t=sc();
    int tc=1;
    while(t--)
    {
        r=sc(),c=sc();
        getchar();

        for(int i=0; i<r; i++)gets(ara[i]);
        memset(visit,false,sizeof visit);
        int val[255]= {0};

        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                if(visit[i][j])continue;
                else
                {
                    val[ara[i][j]]++;
                    call(i,j,ara[i][j]);
                }
            }
        int mx=0;
        for(int i='a';i<='z';i++)if(val[i]>mx)mx=val[i];

        printf("World #%d\n",tc++);
        while(mx)
        {
            for(int i='a';i<='z';i++)
                if(val[i]==mx)printf("%c: %d\n",i,mx);
            mx--;
        }




    }

    return 0;

}
