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
    int n;
    while(n=sc())
    {
        int r[n],k[n];
        for(int i=0;i<n;i++)r[i]=k[i]=0;

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(sc())
                {
                    r[i]++;
                    k[j]++;
                }
        vector<int>row,col;
        for(int i=0;i<n;i++)
        {
            if(r[i]%2!=0)row.push_back(i);
            if(k[i]%2!=0)col.push_back(i);
        }

        if(row.size()==0&&col.size()==0)printf("OK\n");
        else if(row.size()>1||col.size()>1)printf("Corrupt\n");
        else printf("Change bit (%d,%d)\n",row[0]+1,col[0]+1);


    }
    return 0;

}
