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

int ans[92][9];
int r[9]= {0};
int d1[18]= {0};
int d2[18]= {0};
vector<int>v;

int counter=0;

int a,b;
int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}

void call(int n)
{
    if(v.size()==8)
    {
        for(int i=0; i<8; i++)ans[counter][i]=v[i];
        counter++;
        return ;
    }
    for(int i=0; i<8; i++)
    {
        if(!r[i]&&!d1[n+i]&&!d2[n-i+8])
        {
            r[i]=d1[n+i]=d2[n-i+8]=1;
            v.push_back(i+1);
            call(n+1);
            v.pop_back();
            r[i]=d1[n+i]=d2[n-i+8]=0;

        }
    }


}


int main()
{
//freopen("in.txt","r",stdin);

    call(0);

    int t=sc();
    while(t--)
    {

        a=sc();
        b=sc();
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        int cases=1;
        for(int i=0; i<92; i++)
        {
            if(ans[i][b-1]==a)
            {
                printf("%2d      ",cases++);
                printf("%d",ans[i][0]);
                for(int j=1; j<8; j++)printf(" %d",ans[i][j]);
                printf("\n");
            }

        }
        if(t)printf("\n");

    }



    return 0;

}
