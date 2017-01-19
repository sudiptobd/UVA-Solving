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


int main()
{
//freopen("in.txt","r",stdin);
   int t=Int;
   while(t--)
   {
        int x=Int;
        getchar();


        int ara[5][100]={0};
        int ara2[5][100]={0};
        char bara[10];
        for(int i=0;i<6;i++)
        {
            gets(bara);
            for(int j=0;j<5;j++)ara[j][bara[j]]++;
        }
        for(int i=0;i<6;i++)
        {
            gets(bara);
            for(int j=0;j<5;j++)ara2[j][bara[j]]++;
        }

        vector<int>v[5];
        for(int i=0;i<5;i++)
            for(int j='A';j<='Z';j++)
                if(ara[i][j]&&ara2[i][j])v[i].push_back(j);


                int y=1;

            for(int i=0;i<v[0].size();i++)
             for(int j=0;j<v[1].size();j++)
              for(int k=0;k<v[2].size();k++)
               for(int l=0;l<v[3].size();l++)
                for(int m=0;m<v[4].size();m++)
                    if(y==x)
                    {
                        printf("%c%c%c%c%c\n",v[0][i],v[1][j],v[2][k],v[3][l],v[4][m]);
                        goto aa;
                    }
                    else y++;



    y--;
    if(y<x)printf("NO\n");
    aa:;
   }
    return 0;

}












