#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,ck,b[3002],a[3002],i;
    while(scanf("%d",&n)==1)
    {
        ck=1;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(i=0; i<n-1; i++)
            b[i]=abs(a[i+1]-a[i]);

        sort(b,b+i);

        for(i=1; i<n; i++)
            if(b[i]==b[i-1])
            {
                ck=0;
                break;
            }
        if(ck==0)printf("Not jolly\n");
        else printf("Jolly\n");
    }
    return 0;
}
