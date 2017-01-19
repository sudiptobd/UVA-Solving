#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>

using namespace std;
char a[1000000],b[1000000];
int main()
{
    int i;
    while(scanf("%s %s",a,b)==2)
    {
        queue<char>q;
        int len=strlen(a);
        for( i=0; i<len; i++)q.push(a[i]);
        int lenb=strlen(b);

        for( i=0; i<lenb; i++)
        {
            char v=q.front();
            if(v==b[i]) q.pop();
            if(q.empty())
            {
                printf("Yes\n");
                break;
            }
        }

        if(i==lenb) printf("No\n");
    }
    return 0;
}
