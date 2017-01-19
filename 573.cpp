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

float sc()
{
    float n;
    scanf("%f",&n);
    return n;
}

int main()
{
//freopen("in.txt","r",stdin);

    float h, u , d , f;
    while(scanf("%f %f %f %f",&h,&u,&d,&f)&&h)
    {
        f=(f/100)*u;
        float ini=0;
        int day=1;
        while(ini<=h)
        {

            if(u>0)ini +=u;
            //printf("%f %f %f\n",ini,f,u);
            if(ini>h)break;
            ini-=d;
            if(ini<0)break;

            u-=f;

            day++;
        }

        if(ini>=h)printf("success on day %d\n",day);
        else printf("failure on day %d\n",day);


    }

    return 0;

}
