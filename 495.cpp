#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

char f[5000][2000];

void fgenerate()
{
    f[0][0]='0';
    f[1][0]='1';
    f[2][0]='1';
    f[3][0]='2';
    f[4][0]='3';
    for(int x=3; x<5001; x++)
    {
        int l1=strlen(f[x-1]);
        int l2=strlen(f[x-2]);
        int carry=0,i;

        for(i=0;i<l2; i++)
        {
            f[x][i]=(((f[x-1][i]-'0'+f[x-2][i]-'0'+carry)%10)+'0');
            carry=(f[x-1][i]-'0'+f[x-2][i]-'0'+carry)/10;
        }

        if(l1>l2)
            while (i<l1)
            {
               f[x][i]=(((f[x-1][i]-'0'+carry)%10)+'0');
               carry=(f[x-1][i]-'0'+ carry)/10;
               i++;
            }

        if (carry > 0)f[x][i++] = carry+'0';
        f[x][i]=NULL;

    }

}

int main()
{
    fgenerate();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("The Fibonacci number for %d is ",n);
        int l=strlen(f[n]);
        for(int i=l-1;i>=0;i--)printf("%c",f[n][i]);
        printf("\n");
    }
    return 0;
}
