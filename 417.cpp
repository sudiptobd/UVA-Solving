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


map<string,int>m;

char p[]= {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void generate()
{
    int a,b,c,d,e;
    a=b=c=d=e=0;
    for(int i=1; i<=26; i++)
    {
        a++;
        string x="";
        x+=p[i];
        m[x]=a;
        for(int j=i+1; j<=26; j++)
        {
            b++;
            string x="";
            x+=p[i];
            x+=p[j];
            m[x]=26+b;
            for(int k=j+1; k<=26; k++)
            {
                c++;
                string x="";
                x+=p[i];
                x+=p[j];
                x+=p[k];
                m[x]=26+325+c;
                for(int l=k+1; l<=26; l++)
                {
                    d++;
                    string x="";
                    x+=p[i];
                    x+=p[j];
                    x+=p[k];
                    x+=p[l];
                    m[x]=26+325+2600+d;
                    for(int h=l+1; h<=26; h++)
                    {
                        e++;
                        string x="";
                        x+=p[i];
                        x+=p[j];
                        x+=p[k];
                        x+=p[l];
                        x+=p[h];
                        m[x]=26+325+2600+14950+e;
                    }
                }
            }
        }
    }
    //printf("%d %d %d %d %d %d\n",a,b,c,d,e,a+b+c+d+e);

}
int main()
{
//freopen("in.txt","r",stdin);
    generate();
    char ara[100];
    while(gets(ara))
        printf("%d\n",m[ara]);


    return 0;

}
