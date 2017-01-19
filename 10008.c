#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stock[100000];
int main()
{

    int l,ara[27],i,j;
    char input[500];

    char ch[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alphau[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    int start=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<27;i++)ara[i]=0;
    while(n--)
    {
        gets(input);


        l=strlen(input);
        for(i=0,j=start;i<l;i++,j++)
        {
            if(input[i]>90)stock[j]=input[i]-32;
            else stock[j]=input[i];
        }
        start=start+l;
    }
    l=strlen(stock);

    for(i=0;i<l;i++)
        for(j=0;j<26;j++)
            if(stock[i]==alphau[j])
            {
                ara[j]++;
                break;
            }
    int temp;
    char tempc;
    for(i=0;i<26;i++)
        for(j=1;j<26;j++)
            if(ara[j]>ara[j-1])
            {
                temp=ara[j];
                tempc=ch[j];
                ara[j]=ara[j-1];
                ch[j]=ch[j-1];
                ara[j-1]=temp;
                ch[j-1]=tempc;
            }
    for(i=0;i<26;i++)
        for(j=1;j<26;j++)
            if(ara[j]==ara[j-1])
                if(ch[j]<ch[j-1])
                {
                    temp=ara[j];
                    tempc=ch[j];
                    ara[j]=ara[j-1];
                    ch[j]=ch[j-1];
                    ara[j-1]=temp;
                    ch[j-1]=tempc;
                }

    i=0;
    while(ara[i]!=0)
    {
        printf("%c %d\n",ch[i],ara[i]);
        i++;
    }

    return 0;
}
