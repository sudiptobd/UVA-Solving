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


#define max 1000001

bool prime[max]= {false};
void generate()
{
    for(int i=2;i<max;i++)
        if(!prime[i])
            for(int j=i+i;j<max;j+=i)
                prime[j]=true;
}


int main()
{
//freopen("in.txt","r",stdin);

    generate();
    char ara[100];
    while(gets(ara))
    {
        int len=strlen(ara);
        int sum=0;
        for(int i=0;i<len;i++)
        {
            if(ara[i]>='a'&&ara[i]<='z')sum+=ara[i]-96;
            else sum+=ara[i]-38;
        }
        if(!prime[sum])printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }

    return 0;

}
