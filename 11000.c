#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

unsigned int male[1001],female[1001];
void generate()
{
    male[0]=0;
    female[0]=1;
    for(int i=1;i<=1000;i++)
    {
        male[i]=male[i-1]+female[i-1];
        female[i]=1+male[i-1];
    }
}
int main()
{
     generate();
     int n;
     while(scanf("%d",&n)&&n>=0)printf("%u %u\n",male[n],male[n]+female[n]);

    return 0;
}
