#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);
    while(scanf("%lld",&n)==1)printf("%lld\n",n>>1);

    return 0;
}
