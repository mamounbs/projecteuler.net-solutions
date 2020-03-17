#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u0=1,u1=2;
    long u,s=2;;

    do
    {
        u=u0+u1;
        u0=u1;
        u1=u;
        if(u%2==0)
            s+=u;
    }while(u<4000000);

    printf("S= %d",s);
}
