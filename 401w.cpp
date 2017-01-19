#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
char ara[10000];
char para[10000];
char invalid[]="BCDEFGJKLNPQRSZ12345679\0";
int flag=0;

bool ispaline()
{
    int len= strlen(ara);
    for(int i=0,j=len-1; i<len; i++,j--)if(ara[i]!=ara[j])return false;
    return true;
}

bool isinv()
{
    char in[]="L0235JSEZ\0";
    int len= strlen(para);
    for(int i=0; i<len; i++)
        for(int j=0; j<10; j++)
            if(para[i]==in[j])return true;
    return false;
}

bool ismirror()
{
    //if(invalid())return false;
    char ck[]="L0235\0";
    char rp[]="JOSEZ\0";
    int len= strlen(ara);
    for(int i=0; i<len; i++)
        for(int j=0; j<6; j++)
            if(ara[i]==ck[j])ara[i]=rp[j];
    if(ispaline())return true;
    else return false;
}

int main()
{
    //freopen("a.txt","r",stdin);
    while(gets(ara))
    {
        flag=0;
        if(strlen(ara)==0)continue;
        strcpy(para,ara);
        bool p=ispaline();
        bool m=ismirror();
        bool i=isinv();
        if(strlen(para)==1)
        {
            for(int j=0; j<24; j++)
                if(ara[0]==invalid[j])
                {
                    printf("%s -- is a regular palindrome.\n\n",para);
                    flag=1;
                }
            if(flag)continue;
        }
        if(!p&&!m)printf("%s -- is not a palindrome.\n\n",para);
        else if(p&&i)printf("%s -- is a regular palindrome.\n\n",para);
        else if(!p&&m)printf("%s -- is a mirrored string.\n\n",para);
        else if(p&&m&&!i)printf("%s -- is a mirrored palindrome.\n\n",para);
    }
    return 0;
}
