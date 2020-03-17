#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ok=1,j;
    long long i=2520;


    /**********
    printf("En Marche\n");
    while (i %  2 != 0 || i %  3 != 0 || i %  4 != 0 || i %  5 != 0 ||
           i %  6 != 0 || i %  7 != 0 || i %  8 != 0 || i %  9 != 0 ||
           i % 10 != 0 || i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
           i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||
           i % 18 != 0 || i % 19 != 0 || i % 20 != 0)
           {
                i += 20;
           }
    **********/

    printf("En Marche\n");
    do
    {
        ok=1;i++;j=1;
        do
        {
            j++;
            if(i%j!=0)
                ok=0;
        }while((ok!=0)&&(j<=20));
    }while(ok!=1);

    /*************
    printf("En Marche\n");
    for(i=20;;i+=20)
    {
        ok=1;
        for(j=2;j<=20;j++)
        {
            if(i%j!=0)
            {
                ok=0;
                break;
            }
        }
        if(ok==1)
            break;
    }
    **************/
    printf("\nLe plus petit entier divisible par tous les entier de 1->20 : %lld",i);
}
