#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,ok;
    double c1;
    printf("En Marche");
    a=1;
    do
    {
        a++;
        b=a;
        do
        {
            b++;
            c=b;
            do
            {
                c1=a*a+b*b;
                c++;
                if((c*c)==c1)
                {
                    if(a+b+c==1000)
                        {
                            ok=1;
                            break;
                        }
                }
            }while((c*c)<c1);
            if((a+b+c==1000)&&(ok==1))
                {
                    ok=2;
                    break;
                }
        }while(b<500);
        if((a+b+c==1000)&&(ok==2))
            {
                ok=3;
                break;
            }
    }while(a<500);
    if((a+b+c==1000)&&(ok==3))
    {
        printf("\nResultat = %ld",a*b*c);
        printf("\na = %d",a);
        printf("\nb = %d",b);
        printf("\nc = %d",c);
    }
    else
        printf("Pas de resultat");
}
