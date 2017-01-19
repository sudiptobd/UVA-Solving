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
//freopen("in.txt","r",stdin);
    char son[17][30];
    strcpy(son[1],"Happy");
    strcpy(son[2],"birthday");
    strcpy(son[3],"to");
    strcpy(son[4],"you");
    strcpy(son[5],"Happy");
    strcpy(son[6],"birthday");
    strcpy(son[7],"to");
    strcpy(son[8],"you");
    strcpy(son[9],"Happy");
    strcpy(son[10],"birthday");
    strcpy(son[11],"to");
    strcpy(son[12],"Rujia");
    strcpy(son[13],"Happy");
    strcpy(son[14],"birthday");
    strcpy(son[15],"to");
    strcpy(son[16],"you");
    int n=sc();
    getchar();
    char ara[n+1][105];
    //char take[105];
    for(int i=1;i<=n;i++)
        gets(ara[i]);

    bool song=false,man=false;
    int i=1,j=1;
    while(!song||!man)
    {
        printf("%s: %s\n",ara[i],son[j]);
        if(i==n)
        {
            man=true;
            i=1;
        }
        else i++;

        if(j==16)
        {
            song=true;
            j=1;
        }
        else j++;

        if(song&&!man)song=false;


    }



    return 0;

}
