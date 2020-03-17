#include <stdio.h>
#include <stdlib.h>

int palindrome(long x)
{
    int i,j=0;
    char ch[7];
    sprintf(ch,"%ld",x);

    char ch1[7]="";
    for(i=strlen(ch)-1;i>=0;i--,j++)
    {
        ch1[j]=ch[i];
    }


    if(!(strcmp(ch,ch1)))
        return 1;
    else
        return 0;
}


int main()
{
    int i,j;
    long s,max=10e4;
    /*for(i=100;i<=999;i++)
    {
        for(j=100;j<=999;j++)
        {
            s=i*j;
            if (palindrome(s)&& s>max)
                max=s;
        }
    }
    printf("Max = %ld",max);*/


    /****** 0.128 s *******/
    for(i=999;i>=100;i--)
    {
        for(j=999;j>=100;j--)
        {
            s=i*j;
            if (palindrome(s))
            {
                if(s>max)
                    max=s;
                break;
            }
        }
    }
    printf("Max = %ld",max);
}
