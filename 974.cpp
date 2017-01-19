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

int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

bool ara[40005]= {false};
void ini()
{
    ara[1]=true;
    ara[9]=true;
    ara[45]=true;
    ara[55]=true;
    ara[99]=true;
    ara[297]=true;
    ara[703]=true;
    ara[999]=true;
    ara[2223]=true;
    ara[2728]=true;
    ara[4879]=true;
    ara[4950]=true;
    ara[5050]=true;
    ara[5292]=true;
    ara[7272]=true;
    ara[7777]=true;
    ara[9999]=true;
    ara[17344]=true;
    ara[22222]=true;
    ara[38962]=true;
}


int main()
{
//freopen("in.txt","r",stdin);
    ini();

    int t=sc();
    for(int i=1; i<=t; i++)
    {
        int a=sc(),b=sc();
        int count=0;
        if(i!=1)printf("\n");
        printf("case #%d\n",i);

        for(int j=a; j<=b; j++)
        {

            if(ara[j])
            {
                printf("%d\n",j);
                count++;
                continue;
            }

        }
        if(count==0)printf("no kaprekar numbers\n");



    }

    return 0;

}


int cmain()
{
//freopen("in.txt","r",stdin);

    int t=sc();
    for(int i=1; i<=t; i++)
    {
        int a=sc(),b=sc();
        int count=0;
        if(i!=1)printf("\n");
        printf("case #%d\n",i);

        for(int j=a; j<=b; j++)
        {
            if(j<9)j=9;
            if(ara[j])
            {
                printf("%d\n",j);
                count++;
                continue;
            }

            int n=j*j;
            vector<int>v;

            while(n)
            {
                v.push_back(n%10);
                n/=10;
            }

            for(int z=0; z<=v.size()-2; z++)
            {
                int x=0,y=0;
                int k;
                for(k=v.size()-1; k>z; k--)
                {
                    x=x*10+v[k];
                    //printf("%d\n",k);
                }

                for(; k>=0; k--)
                    y=y*10+v[k];
                if(x+y==j&&(x!=0&&y!=0))
                {
                    printf("%d\n",j);
                    count++;
                    ara[j]=true;
                }
            }


        }
        if(count==0)printf("no kaprekar numbers\n");



    }

    return 0;

}
