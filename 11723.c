#include <stdio.h>

int main()
{
    int road, number, suffix, test_case=1;

    while(scanf("%d %d", &road, &number)==2)
    {
        if(road==0 && number==0)
            break;

            suffix=(road-number)/number;

            if(road>=number && road%number!=0) suffix++;

            if(suffix<=26) printf("Case %d: %d\n", test_case, suffix);
            else
                printf("Case %d: impossible\n", test_case);

        test_case++;
    }
}
