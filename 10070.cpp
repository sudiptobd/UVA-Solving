#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

char a[1000000000];
 unsigned long long int a4,a100,a400,a15,a55;

void generate_mod()
{
    a4=0,a100=0,a400=0,a15=0,a55=0;
    unsigned long long int len=strlen(a);
    for(unsigned long long int i=0;i<len;i++)
    {
        a4=(a4*10+(a[i]-48))%4;
        a100=(a100*10+(a[i]-48))%100;
        a400=(a400*10+(a[i]-48))%400;
        a15=(a15*10+(a[i]-48))%15;
        a55=(a55*10+(a[i]-48))%55;
    }
}

bool leap()
{
    if ((!a4 && a100) || !a400)return true;
    else return false;
}

bool bulukulu()
{
    if(leap()&&a55==0)return true;
    else return false;
}


int main()
{   int count=0;
    while(scanf("%s",a)==1)
    {
         if (count>0)
            printf("\n");
            count++;
        generate_mod();
        if(leap())printf("This is leap year.\n");
        if(a15==0)printf("This is huluculu festival year.\n");
        if(bulukulu())printf("This is bulukulu festival year.\n");
        if(!leap()&&a15!=0&&!bulukulu())printf("This is an ordinary year.\n");
        //printf("\n");
    }
    return 0;
}
