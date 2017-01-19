#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0&&n==0)break;
        int ans=0;
        if(n==1||m==1)ans=m*n;
        else if(n==2||m==2)
        {
            ans=m*n/8*4;
            if((m*n)%8==2)ans+=2;
            else if((m*n)%8==6||(m*n)%8==4)ans+=4;
            else ans=(m*n+1)/2;
        }
        else ans=(m*n+1)/2;
        printf("%d knights may be placed on a %d row %d column board.\n",ans,m,n);
    }
    return 0;
}
