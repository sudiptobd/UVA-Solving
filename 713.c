#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[205],b[205],s[205];
    int i,j,l1,l2,l,sum,carry;
    getchar();
    for(i=0; i<n; i++)
    {
        scanf("%s %s",a,b);
        l1=strlen(a);
        l2=strlen(b);

        if(l1>l2)l=l1;
        else l=l2;
        carry=0;
        for(j=0; j<l; j++)
        {
            if((l1>l2 && j==l2)||(l1>l2&&j>l2) )b[j]='0';
            else if((l2>l1 && j==l1)||(l2>l1&&j>l1))a[j]='0';
            sum=(a[j]-48)+(b[j]-48)+carry;

            if(sum<10)
            {
                s[j]=sum+48;
                carry=0;
            }
            else
            {
                sum=sum-10;
                s[j]=sum+48;
                carry=1;
            }


        }

        if(carry==1)s[j]='1';
        int got=0;
        if(carry==1)l=l+1;
        for(j=0; j<l; j++)
        {
            if(s[j]!='0')got=1;
            if(got==0 && s[j]=='0')continue;
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}
