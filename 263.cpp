#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <algorithm>
#define lli long long int

using namespace std;



char ara[10]="78512";

bool ase(char a,char b)
{
    return a<b;
}

bool dse(char a,char b)
{
    return a>b;
}



lli get(lli n)
{
    char ara[15];
    int i=0;
    while(n)
    {
        ara[i++]=(n%10)+48;
        n=n/10;
    }

    ara[i]='\0';
    if(strlen(ara)==0)strcpy(ara,"0");

    lli a,b;
    sort(ara,ara+strlen(ara),dse);
    sscanf(ara,"%lld",&a);
    sort(ara,ara+strlen(ara),ase);
    sscanf(ara,"%lld",&b);
    printf("%lld - %lld = %lld\n",a,b,a-b);
    return a-b;
}





int main()
{

    lli n;
    while(scanf("%lld",&n)&&n)
    {
        printf("Original number was %lld\n",n);
        map<lli,bool>m;
        lli count=0;
        while(!m[n])
        {
            m[n]=true;
            n=get(n);
            count++;
        }
        printf("Chain length %lld\n\n",count);
    }
    return 0;
}
