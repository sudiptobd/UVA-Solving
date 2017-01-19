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
    for(k=2; k<=400; k++)
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

/*
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
*/

void print324(int n)
{
    int a[10]={0};
    int i;
    int len = strlen(factorial[n]);
    for(i=0; i<len; i++)
    {
        if(factorial[n][i]=='0')a[0]++;
        else if(factorial[n][i]=='1')a[1]++;
        else if(factorial[n][i]=='2')a[2]++;
        else if(factorial[n][i]=='3')a[3]++;
        else if(factorial[n][i]=='4')a[4]++;
        else if(factorial[n][i]=='5')a[5]++;
        else if(factorial[n][i]=='6')a[6]++;
        else if(factorial[n][i]=='7')a[7]++;
        else if(factorial[n][i]=='8')a[8]++;
        else if(factorial[n][i]=='9')a[9]++;
    }
    printf("%d! --\n",n);
    printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}

int main()
{
    int n;
    factorial[0][0]='1';factorial[0][1]=0;
    factorial[1][0]='1';factorial[1][1]=0;
    fac();
    while(scanf("%d",&n)&&n)print324(n);
    return 0;
}
