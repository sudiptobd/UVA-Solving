#include <iostream>
#include <cstdio>


using namespace std;
/*
bool isrect(long long int a,long long int b,long long int c,long long int d)
{
    if((a==b&&c==d)||(a==c&&d==b)||(a==d&&c==b))return true;
    else return false;
}

bool issqre(long long int a,long long int b,long long int c,long long int d)
{
    if(a==c&&b==c&&b==d)return true;
    else return false;
}
bool isquard(long long int a,long long int b,long long int c,long long int d)
{
    if(a+b+c<d)return false;
    else if(a+b+d<c)return false;
    else if(a+c+d<b)return false;
    else if(c+b+d<a)return false;
    else true;
}
*/
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            long long int a,b,c,d;
            scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
            if(a==b && b==c && c==d) printf("square\n");
            else if( (a==b && c==d) || (b==c && d==a) || (a==c&& b==d)) printf("rectangle\n");
            else if((a<=b+c+d) && (b<=c+d+a) && (c<=d+a+b) && (d<=a+b+c) ) printf("quadrangle\n");
            else printf("banana\n");

        }
    }
    return 0;
}
