#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        getchar();
        int b=0,w=0,a=0,t=0;
        for(int j=1;j<=n;j++)
        {
            char ch;
            scanf("%c",&ch);
            if(ch=='B')b++;
            else if(ch=='W')w++;
            else if(ch=='A')a++;
            else if(ch=='T')t++;
        }
        if(b+a==n&&b!=0)printf("Case %d: BANGLAWASH\n",i);
        else if(a==n)printf("Case %d: ABANDONED\n",i);
        else if(w+a==n&&w!=0)printf("Case %d: WHITEWASH\n",i);
        else if(b==w)printf("Case %d: DRAW %d %d\n",i,b,t);
        else if(b>w)printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(b<w)printf("Case %d: WWW %d - %d\n",i,w,b);

    }
    return 0;
}
