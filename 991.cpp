#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int cat[11];
void catalan()
{
    cat[0]=1,cat[1]=1,cat[2]=2;
    for(int i=3;i<11;i++)
    {
        cat[i]=0;
        int j=0,k=i-1;
        while(j<i)
        {
            cat[i]+=cat[j]*cat[k];
            j++,k--;
        }
    }


}

int main()
{
    catalan();
    int i=0,n;
    while(scanf("%d",&n)==1)
    if(i++==0)printf("%d\n",cat[n]);
    else printf("\n%d\n",cat[n]);

    return 0;
}
