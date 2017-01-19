
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d",&n);
        getchar();
        char color[n+2];
        int org=0;
        int i;
        for(i=1;i<=n;i++)
        {
            char str[10];
            scanf("%s",str);
            if(!strcmp(str,"SAME"))
            {
                char as[5];
                int a;
                scanf("%s %d",as,&a);
                color[i]=color[a];
                if(color[i]=='l')org--;
                else org++;

            }
            else if(!strcmp(str,"LEFT"))
            {
                color[i]='l';
                org--;
            }
            else if(!strcmp(str,"RIGHT"))
            {
                color[i]='r';
                org++;
            }
        }
        printf("%d\n",org);

    }
    return 0;
}
