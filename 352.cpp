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

char ara[30][30];
bool visit[30][30]= {false};
int n;

void call(int x,int y)
{

    visit[x][y]=true;
    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
        {
            if(!(i==0&&j==0)&&(x+i)>=0&&(y+j)>=0)
                if(ara[x+i][y+j]=='1'&&!visit[x+i][y+j])
                    call(x+i,y+j);
        }
}

int main()
{
//freopen("in.txt","r",stdin);

    int t=1;
    while(scanf("%d",&n)==1)
    {
        getchar();
        char take[n+1];
        for(int i=0; i<n; i++)
        {
            gets(take);
            strcpy(ara[i],take);
        }
        memset(visit,false,sizeof visit);
        int count=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if(ara[i][j]=='1'&&!visit[i][j])
                {
                    //ara[i][j]='0';
                    //visit[i][j]==true;
                    count++;
                    call(i,j);
                }

            }
        printf("Image number %d contains %d war eagles.\n",t++,count);


    }


    return 0;

}
