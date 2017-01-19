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

bool chek(int v[],int count)
{
    bool val=false;
    for(int i=0;i<count;i++)
        if(v[i]!=9)
        {
            val=true;
            break;
        }
    return val;
}

void add(int v[],int count)
{
    //for(int i=0;i<count;i++)printf("(%d) ",v[i]);
    int carry=1;
    for(int i=count-1;i>=0;i--)
    {
        v[i]+=carry;
        if(v[i]>9){carry=1;v[i]=0;}
        else carry=0;
    }
}



int main()
{
//freopen("in.txt","r",stdin);

    int wn;
    while(scanf("%d",&wn)==1)
    {

        printf("--\n");
        getchar();


        char words[wn][300];
        for(int i=0;i<wn;i++)
        gets(words[i]);

        int rn=sc();
        getchar();
        char rule[300];
        for(int i=0;i<rn;i++)
        {
            gets(rule);
            int len=strlen(rule);
            int count=0;
            for(int j=0;j<len;j++)
                if(rule[j]=='0')
                    rule[j]=count++;

            for(int k=0;k<wn;k++)
            {
                int v[count];
                for(int x=0;x<count;x++)v[x]=0;

                while(chek(v,count))
                {
                    for(int x=0;x<len;x++)
                    {
                        if(rule[x]=='#')printf("%s",words[k]);
                        else printf("%d",v[rule[x]]);
                    }
                    printf("\n");

                    add(v,count);
                    //printf("hell");
                }
                for(int x=0;x<len;x++)
                    {
                        if(rule[x]=='#')printf("%s",words[k]);
                        else printf("%d",v[rule[x]]);
                    }
                    printf("\n");

            }


        }
        //for(int i=0;i<rn;i++)puts(rules[i]);



    }

    return 0;

}
