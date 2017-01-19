#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define max 1000001

bool prime[max]= {false};
void generate()
{
    prime[1]=true;
    for(int i=2;i<max;i++)
        if(!prime[i])
            for(int j=i+i;j<max;j+=i)
                prime[j]=true;
}


int main()
{
    generate();
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
        char ara[2009];
        gets(ara);
        int len=strlen(ara);
        int alpa[150]={0};
        bool visit[150]={false};
        for(int j=0;j<len;j++)
        {
            alpa[ara[j]]++;
            visit[ara[j]]=true;
        }
        bool flag=true;
        printf("Case %d: ",i);
        for(int j=0;j<150;j++)
            if(visit[j])
                if(!prime[alpa[j]])printf("%c",j),flag=false;
        if(flag)printf("empty");
        printf("\n");

    }

    return 0;
}
