#include <stdio.h>
#include <stdlib.h>

int nombrediviseurs(long long x)
{
    int nod=0,i;
    int racine=sqrt(x);
    for(i = 1; i<= racine; i++)
    {
        if(x % i == 0){
            nod += 2;
        }
    }

    if (racine * racine == x) {
        nod--;
    }

    return nod;
}


int main()
{
    long long s=0,i=0;
    do
    {
        i++;
        s+=i;

    }while(nombrediviseurs(s)<=500);
        printf("Result = %lld",s);
}
