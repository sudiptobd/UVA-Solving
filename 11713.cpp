#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

bool vowel(char a, char b)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
            return true;
    return false ;
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[25],b[25];
    while(n--)
    {
        int flag=1;
        gets(a);
        gets(b);
        int l=strlen(a);
        int l2=strlen(b);
        if(l!=l2)
        {
            printf("No\n");
            continue;
        }
        for(int i=0;i<l;i++)
        {
            if(vowel(a[i],b[i]))continue;
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }

        if(flag)printf("Yes\n");
        else printf("No\n");

    }
    return 0;
}
