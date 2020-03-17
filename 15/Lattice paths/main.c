#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int exist(char ch[],FILE* f,int n)
{
    int i;
    char ch1[41];
    for(i=0;i<n;i++)
    {
        fscanf(f,"%s",ch1);
        if(strcmp(ch,ch1)==0)
            return 1;
    }
    return 0;
}

int main()
{
    FILE* f=NULL;
    f=fopen("p.txt","r+");

    int r, d, b,k,i,l=0;
    long x;
    char ch[41];
    char ch2[]="";
    srand(time(NULL));
    for(x=1;x<=100;x++)
    {
        strcpy(ch,"");
        r=20;d=20;k=0;
        do
        {
            b=rand()%2;
            if(b==0)
            {
                strcat(ch,"d");
                d--;
                k++;
            }
            else
            {
                strcat(ch,"r");
                r--;
                k++;
            }
        }while(!(r==0||d==0));

        if(r==0)
        {
            for(;k<40;k++)
                strcat(ch,"d");
        }
        else if(d==0)
        {
            for(;k<40;k++)
                strcat(ch,"r");
        }

        ch[41]="\0";
        if(exist(ch,f,x)==0)
            {
                printf("%s\t%ld\n",ch,x);
                fprintf(f,"%s\n",ch);
                l++;
            }
        else
            printf("%s\tExiste\n",ch);

    }
    printf("%d",l);
}
