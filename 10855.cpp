#include<stdio.h>
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
#include<iostream>
using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
#define lli long long int
int getInt()
{
    int x;
    scanf("%d",&x);
    return x;
}
long long getLongLong()
{
    long long x;
    scanf("%lld",&x);
    return x;
}
double getDouble()
{
    double x;
    scanf("%lf",&x);
    return x;
}
char getChar()
{
    char x;
    scanf("%c",&x);
    return x;
}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
////////////////////////////////////
int a,b;

int check(char ara[][5000],char bara[][5000])
{
    int counter=0;
    for(int i=0; i<a; i++)
        for(int j=0; j<a; j++)
        {
            if((a-i>=b)&&(a-j>=b))
                {
                    bool flag=true;
                    for(int k=0;k<b;k++)
                        for(int l=0;l<b;l++)
                            if(ara[k+i][l+j]!=bara[k][l])
                            {
                                flag=false;
                                break;
                            }
                    if(flag)counter++;;
                }
        }
        return counter;



}

int main()
{
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);

    while((a=Int)&&(b=Int))
    {
        getchar();
        char ara[a][5000],bara[b][5000],temp[b][5000];
        for(int i=0; i<a; i++)gets(ara[i]);
        for(int i=0; i<b; i++)gets(bara[i]);

        printf("%d ",check(ara,bara));

        for(int x=1; x<=3; x++)
        {
            for(int j=b-1,i=0; j>=0; j--,i++)
            {
                for(int k=0; k<b; k++)
                    temp[k][j]=bara[i][k];
            }
            for(int i=0; i<b; i++)
                for(int j=0; j<b; j++)
                {
                    bara[i][j]=temp[i][j];
                   // printf("%c",ara[i][j]);
                    //if(j==a-1)printf("\n");
                }



            if(x==3) printf("%d\n",check(ara,bara));
            else  printf("%d ",check(ara,bara));
        }


    }
    return 0;

}
