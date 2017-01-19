#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

int ara[10005][10]= {0};

void gen()
{
    for(int n=0; n<=10002; n++)
    {
        int x=n;
        while(x)
        {
            ara[n][x%10]++;
            x/=10;
        }
        if(n>0)for(int i=0;i<10;i++)ara[n][i]+=ara[n-1][i];
    }

}

int main()
{
    gen();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        for( i=0;i<9;i++)printf("%d ",ara[n][i]);
        printf("%d\n",ara[n][i]);

    }
}
