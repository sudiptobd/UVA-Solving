#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main()
{
    int count = 0;
    double i = 8,j;
    while(count < 10)
    {
         j = sqrt(i * (i + 1) / 2);
        if(j == (long) j)
        {
            printf("%10ld%10ld\n", (long) j, (long) i);
            count++;
        }
        i++;
    }
}
