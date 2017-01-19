#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#define lli long long int

char f[10000];
char factorial[1010][1000000];

void multiply(int k)
{
    int carry,sum,i;
    int len = strlen(f);
    carry=0;
    i=0;
    while(i<len)
    {
        sum=carry+(f[i] -'0') * k;
        f[i] = (sum % 10) + '0';
        i++;
        carry = sum/10;
    }
    while(carry>0)
    {
        f[i++] = (carry%10) + '0';
        carry/=10;
    }
    f[i]=0;
    for(int j=0; j<i; j++)
        factorial[k][j]=f[j];
    factorial[k][i]=0;
}

void fac()
{
    int k;
    strcpy(f,"1");
    for(k=2; k<=1000; k++)
        multiply(k);
}

void print(int n)
{
    int i;
    int len = strlen(factorial[n]);
    printf("%d!\n",n);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",factorial[n][i]);
    }
    printf("\n");
}


lli sum(int n)
{
    int i;
    int len = strlen(factorial[n]);
    lli sum=0;
    for(i=len-1; i>=0; i--)
    {
        sum+=factorial[n][i]-'0';
    }
    return sum;
}


int main()
{
    int n;
    factorial[0][0]='1';
    factorial[1][0]='1';
    fac();
    while(scanf("%d",&n)==1)
    {
        printf("%lld\n",sum(n));
    }
    return 0;
}

