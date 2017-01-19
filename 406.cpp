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



#define max 1005

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
    int n,c;

    while(scanf("%d %d",&n,&c)==2)
    {

        vector<int>v;
        for(int i=1;i<=n;i++)
            if(!prime[i])v.push_back(i);

        int z=c*2-(v.size()%2);

        int f,t;
        if(z>v.size())
        {
            f=0;
            t=v.size();
        }
        else
        {
            f=(v.size()-z)/2;
            t=f+z;
        }



        printf("%d %d:",n,c);
        for(int i=f;i<t;i++)
            printf(" %d",v[i]);
        printf("\n\n");



    }

    return 0;

}

//sunnycsebsmrstu2013@gmail.com  sonyashraful  sonytonu







