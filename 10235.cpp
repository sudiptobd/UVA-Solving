#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

char a[1000005];

void primegen()
{
    for(int i=0;i<=1000004;i++)a[i]=1;
    a[0]=0;
    a[1]=0;
    a[2]=1;
    a[3]=1;
    for(int i=0;i<=1000004;i++)
    {
        if(a[i]==0)continue;
        for(int j=i+i;j<=1000004;j+=i)a[j]=0;
    }

}

bool isprime(int n)
{
    if(a[n]==1)return true;
    else false;
}

bool iseprime(int n)
{
    char str[100],rev[100];
    sprintf(str,"%d",n);
    int l=strlen(str);
    for(int i=l-1,j=0;i>=0;i--,j++)rev[j]=str[i];
    int en=atoi(rev);
    if(en==n)return false;
    if(a[en]==1)return true;
    else false;

}

int main ()
{
    primegen();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(isprime(n))
        {
            if(iseprime(n))printf("%d is emirp.\n",n);
            else printf("%d is prime.\n",n);
        }
        else printf("%d is not prime.\n",n);
    }
return 0;
}

