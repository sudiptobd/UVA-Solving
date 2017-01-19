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


int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}

int main()
{

    char ara[10][10];
    strcpy(ara[1]," .,?\"");
    strcpy(ara[2]," abc");
    strcpy(ara[3]," def");
    strcpy(ara[4]," ghi");
    strcpy(ara[5]," jkl");
    strcpy(ara[6]," mno");
    strcpy(ara[7]," pqrs");
    strcpy(ara[8]," tuv");
    strcpy(ara[9]," wxyz");
    strcpy(ara[0],"  ");


//freopen("in.txt","r",stdin);
    int t=sc();
    while(t--)
    {
        int l=sc();
        int lara[l];
        for(int i=0;i<l;i++)lara[i]=sc();
        for(int i=0;i<l;i++)printf("%c",ara[lara[i]][sc()]);
        printf("\n");
    }

    return 0;

}
