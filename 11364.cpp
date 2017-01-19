#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ara[n];
        int min=100,max=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]>max)max=ara[i];
            if(ara[i]<min)min=ara[i];
        }
        int mid=(max-min);
       /* int total=0;
        for(int i=0;i<n;i++)
            if(ara[i]>=mid)total+=ara[i]-mid;
            else total+=mid-ara[i];*/
        printf("%d\n",2*mid);
    }
    return 0;
}
