#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

long long int reverse(long long int n)
{
    long long int s=0;
    while(n!=0)
    {
        s=((n%10)+s*10);
        n=n/10;
    }
    //printf("%lld\n",s);
    return s;
}

bool ispalin(long long int n)
{
    long long int save=n;
    long long int s=0;
    while(n!=0)
    {
        s=((n%10)+s*10);
        n=n/10;
    }
    if(save==s)return true;
    else return false;
}

int main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        scanf("%lld",&n);
        long long int a=0;
        int count=0;
        while(1)
        {
            a=(n+reverse(n));
            //printf("%lld\n",a);
            count++;
            if(ispalin(a))
            {
                printf("%d %lld\n",count,a);
                break;
            }
            n=a;

        }
    }
    return 0;
}
