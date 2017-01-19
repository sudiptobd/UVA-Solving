#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int dec,rem;
    int bin[40];
    int i=0;
    scanf("%d",dec);

    rem=dec;
    while(rem>1)
    {

        bin[i]=rem%2;
        printf("%d",bin[i]);
        rem=rem/2;
        i++;

    }


}
