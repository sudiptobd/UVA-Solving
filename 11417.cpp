#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
int stock[502][502];
void gcd(int i,int j)
{
    int a=i;
    int b=j;
    int c=0;
    while(a)
    {
        c=b%a;
        b=a;
        a=c;
    }
    stock[i][j]=b;
}

void gene()
{
    for(int i=1; i<501; i++)
        for(int j=i+1; j<=501; j++)
            gcd(i,j);

}
int main()
{
    gene();
    int n;
    while(scanf("%d",&n)&&n)
    {
        int G=0;
        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
                G+=stock[i][j];
        printf("%d\n",G);
    }

    return 0;
}
