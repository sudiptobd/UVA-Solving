#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#define lli long long int
using namespace std;


int main()
{
    char ara[10009];
    char str[10009];
    int mx=0;
    while(scanf("%s",ara))
    {
        if(!strcmp(ara,"E-N-D"))break;
        int l=strlen(ara);
        int c=0;
        for(int i=0; i<l; i++)
        {
            if(ara[i]>='a'&&ara[i]<='z'||ara[i]>='A'&&ara[i]<='Z'||ara[i]=='-')
                continue;
            else
                c++;
        }
        l-=c;

        if(mx<l)
        {
            mx=l;
            strcpy(str,ara);
            /*for(int i=0;i<10009;i++)
            {
                if(ara[i]<='Z'&&ara[i]>='A')str[i]=ara[i]+32;
                else str[i]=ara[i];
            }*/
        }
    }

    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            printf("%c",str[i]+32);
        else if(str[i]>='a'&&str[i]<='z'||str[i]=='-')
            printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}
