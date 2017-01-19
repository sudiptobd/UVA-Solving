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

    int t=sc();
    while(t--)
    {
         int d=sc();
         char ara[d][25];
         int l[d],h[d];

         for(int i=0;i<d;i++)
         {
             scanf("%s %d %d",ara[i],&l[i],&h[i]);
             //printf("%s %d %d\n",ara[i],l[i],h[i]);
         }

         int q=sc();
         for(int i=0;i<q;i++)
         {
             int x=sc();
            vector<string>s;

             for(int j=0;j<d;j++)
                 if(x<=h[j]&&x>=l[j])
                     s.push_back(ara[j]);

            if(s.size()==1)cout<<s[0]<<endl;
            else printf("UNDETERMINED\n");

         }
         if(t)printf("\n");
    }

return 0;

}
