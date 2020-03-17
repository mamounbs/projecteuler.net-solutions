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
    long k=1,i=0;;
    do
    {
        k++;
        if(prime(k))
            i++;
    }while(i<10001);

    printf("The 10 001st prime number : %ld",k);
}
