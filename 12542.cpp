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

#define max 100000

bool prime[max]= {false};
void generate()
{
    for(int i=2; i<max; i++)
        if(!prime[i])
            for(int j=i+i; j<max; j+=i)
                prime[j]=true;
}

int main()
{
//freopen("in.txt","r",stdin);
    generate();

    vector<string>v;
    char ara[100];

   // cout<<ara<<endl;
    for(int i=0; i<max; i++)
        if(!prime[i])
        {
            sprintf(ara,"%d",i);
            v.push_back(ara);
        }
    string a;
    while(cin>>a)
    {
        if(a=="0")break;
        int len=v.size();
        int i;
        for( i=len-1; i>=0; i--)
            if(a.find(v[i])!=-1)
            {
                cout<<v[i]<<endl;
                break;
            }

    }


    //printf("%d\n",i);

    return 0;

}
