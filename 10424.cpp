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

int main()
{
//freopen("in.txt","r",stdin);
    char a[100];
    char b[100];
    while(gets(a)&&gets(b))
    {
        int sum=0;
        int len1=strlen(a);
        for(int i=0;i<len1;i++)
            if(isalpha(a[i]))
                sum+=tolower(a[i])-'a'+1;

        while(sum>=10)
        {
            int n=sum;
            sum=0;
            while(n)
            {
                sum+=n%10;
                n=n/10;
            }
        }

        float x=sum;

        sum=0;
        int len=strlen(b);
        for(int i=0;i<len;i++)
            if(isalpha(b[i]))
                sum+=tolower(b[i])-'a'+1;

        while(sum>=10)
        {
            int n=sum;
            sum=0;
            while(n)
            {
                sum+=n%10;
                n=n/10;
            }
        }

        float y=sum;

        if(x>y)printf("%.2f %%\n",(y/x)*100);
        else printf("%.2f %%\n",(x/y)*100);




    }

return 0;

}
