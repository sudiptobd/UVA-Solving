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

int main()
{
//freopen("in.txt","r",stdin);

    char ara[1000000];
    while(gets(ara))
    {
        string s="";
        int len=strlen(ara);
        int i;
        for( i=0; i<len; i++)
        {
            if(isalpha(ara[i]))
            {
                s+=ara[i];
            }
            else
            {
                    if(s.size())
                    {
                        string::iterator it=s.begin();
                    char c=*it;
                    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
                    {
                        cout<<s<<"ay";
                    }
                    else
                    {
                        s.erase(s.begin());
                        s+=c;
                        cout<<s<<"ay";
                    }
                    }

                    s="";
                    cout<<ara[i];

            }
        }
                    if(s.size())
                    {
                        string::iterator it=s.begin();
                    char c=*it;
                    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
                    {
                        cout<<s<<"ay";
                    }
                    else
                    {
                        s.erase(s.begin());
                        s+=c;
                        cout<<s<<"ay";
                    }
                    }

                    s="";
                    //cout<<ara[i];
        printf("\n");
    }
    return 0;

}
