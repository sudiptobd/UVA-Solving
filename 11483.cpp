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

int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}

int main()
{
//freopen("in.txt","w",stdout);


    int n;
    int t=1;
    while(n=sc())
    {
        getchar();
        printf("Case %d:\n",t++);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n");
        printf("{\n");
        while(n--)
        {
            char ara[1000];
            gets(ara);
            string a="printf(\"";
            int len=strlen(ara);
            for(int i=0;i<len;i++)
            {
                if(ara[i]=='\\')a.append("\\\\");
                else if(ara[i]=='"')a.append("\\\"");
                else a+=ara[i];
            }
            a.append("\\n\");");
            cout<<a<<endl;
        }
        printf("printf(\"\\n\");\n");
        printf("return 0;\n");
        printf("}\n");
    }

    return 0;

}

















