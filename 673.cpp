#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char ara[130];
        gets(ara);
        int len=strlen(ara);
        stack<char>st;
        int flag=1;
        for(int i=0; i<len; i++)
        {
            if(ara[i]=='(')st.push(')');
            if(ara[i]=='[')st.push(']');
            if(ara[i]==')'||ara[i]==']')
            {
                if(st.empty())
                {
                    flag=0;
                    break;
                }
                if(ara[i]!=st.top())
                {
                    flag=0;
                    break;
                }
                st.pop();

            }
        }
        if(!st.empty())printf("No\n");
        else printf("%s\n",flag?"Yes":"No");
    }
    return 0;
}

