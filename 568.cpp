#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>

char f[100000];
char factorial[10010][100000];

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
    for(k=2; k<=10001; k++)
        multiply(k);
}
/*
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
*/
void print568(int n)
{
    printf("%5d -> ",n);
    int i;
    int len = strlen(factorial[n]);
    for(i=0; i<len; i++)
        if(factorial[n][i]!='0')
        {
            printf("%c",factorial[n][i]);
            break;
        }
    printf("\n");
}

int main()
{
    int n;
    factorial[0][0]='1';
    factorial[1][0]='1';
    fac();
    while(scanf("%d",&n)==1)
    {   if(n==1){printf("    1 -> 1\n");continue;}
        else if(n==2){printf("    2 -> 2\n");continue;}
        else if(n==0){printf("    0 -> 1\n");continue;}
        print568(n);
    }
    return 0;
}
