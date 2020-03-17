#include <stdio.h>
#include <stdlib.h>

int prime(int x)
{
    long i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}


int main()
{
    printf("En marche");
    long long i,s=0;
    for(i=3;i<2000000;i+=2)
    {
        if(prime(i))
        {
            s+=i;
            printf("\n\ni= %lld\n",i);
            printf("s= %lld",s);
        }
    }
    printf("\nResult = %lld",s+2);

}
