#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int i,j,count,l;
    char ch[200];
    for(i=1;i<=n;i++)
    {
        gets(ch);
        count=0;
        l=strlen(ch);

        for(j=0;j<l;j++)
        {
                 if(ch[j]==' '||ch[j]=='a'||ch[j]=='d'||ch[j]=='g'||ch[j]=='j'||ch[j]=='m'||ch[j]=='p'||ch[j]=='t'||ch[j]=='w')count++;
            else if(ch[j]=='b'||ch[j]=='e'||ch[j]=='h'||ch[j]=='k'||ch[j]=='n'||ch[j]=='q'||ch[j]=='u'||ch[j]=='x')count=count+2;
            else if(ch[j]=='c'||ch[j]=='f'||ch[j]=='i'||ch[j]=='l'||ch[j]=='o'||ch[j]=='r'||ch[j]=='v'||ch[j]=='y')count=count+3;
            else if(ch[j]=='s'||ch[j]=='z')count=count+4;

        }

        printf("Case #%d: %d\n",i,count);

    }
    return 0;
}
