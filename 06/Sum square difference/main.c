#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,square=0;

    for(i=1;i<=100;i++)
    {
        sum+=i*i;
    }

    for(i=1;i<=100;i++)
    {
        square+=i;
    }
    square*=square;

    printf("the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is :\n%d",square-sum);
}
