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

int main()
{
//freopen("in.txt","r",stdin);

    int t=sc();
    char ara[1000];
    while(t--)
    {
        scanf("%s",ara);
        int len=strlen(ara);
        int ch[255]={0};
        char last;
        for(int i=0;i<len;i++)
        {
            if(isalpha(ara[i]))
            {
                ch[ara[i]]++;
                last=ara[i];
            }
            else
            {
                int sum=0;
                while('0'<=ara[i]&&ara[i]<='9')
                {
                    sum=sum*10+(ara[i]-'0');
                    i++;
                }
                i--;
                ch[last]+=sum-1;

            }
        }
        //printf("%d %d %d %d\n",ch['C'],ch['O'],ch['H'],ch['N']);
        printf("%.3lf\n",ch['C']*12.01+ch['O']*16.00+ch['H']*1.008+ch['N']*14.01);
    }

    return 0;

}










