#include <stdio.h>
#include <stdlib.h>

int main()
{
    long t[1001]={0};
    int i,j;
    long long k,max=0;

    FILE* f=NULL;
    f=fopen("n1000.txt","r+");


    for(i=0;i<1000;i++)
    {
        char c=fgetc(f);
        char ch1[1];
        sprintf(ch1,"%c",c);
        t[i]=strtol(ch1,NULL,10);
    }

    char ch[14];
    char chmax[14];
    int l;

    for(i=0;i<1000-13;i++)
    {
        k=1;l=0;

        for(j=0;j<13;j++)
        {
            k=k*t[i+j];
            if(k==0)
            {
                printf("\nNot Ok");
                break;
            }
            else
            {
                sprintf(ch+j,"%d",t[i+j]);
                printf("\nk= %lld",k);
                l++;
            }

        }
        printf("\n\n");
        if((k>max)&&(l==13))
        {
            max=k;
            strcpy(chmax,ch);
        }

    }
    printf("\nMax = %lld",max);
    printf("\nthe thirteen adjacent digits in the 1000-digit number that have the greatest product : %s",chmax);
}
