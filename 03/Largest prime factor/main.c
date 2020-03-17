#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long i=2;
    long long u;
    printf("U = ");
    scanf("%lld",&u);

    printf("\n\n U = ");
    do
    {
        if(u%i==0)
        {
            printf(" %lld *",i);
            u/=i;
        }
        else
            i++;
    }while(u!=1);
    printf("\b ");
}
