#include <stdio.h>
#include <stdlib.h>

void affichematrice(int t[20][20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("|%2d|",t[i][j]);
        }
        printf("\n");
    }
}

long x(int t[20][20],int n)
{
    int i,j;
    long max=0,p;
    int tmax[4]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-4;j++)
        {
            p=t[i][j]*t[i][j+1]*t[i][j+2]*t[i][j+3];
            if(p>max)
            {
                max=p;
                tmax[0]=t[i][j];
                tmax[1]=t[i][j+1];
                tmax[2]=t[i][j+2];
                tmax[3]=t[i][j+3];
            }
        }
    }
    printf(" %d * %d * %d * %d = %ld",tmax[0],tmax[1],tmax[2],tmax[3],max);
    return max;
}


long y(int t[20][20],int n)
{
    int i,j;
    long max=0,p;
    int tmax[4]={0};
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-4;i++)
        {
            p=t[i][j]*t[i+1][j]*t[i+2][j]*t[i+3][j];
            if(p>max)
            {
                max=p;
                tmax[0]=t[i][j];
                tmax[1]=t[i+1][j];
                tmax[2]=t[i+2][j];
                tmax[3]=t[i+3][j];
            }
        }
    }
    printf(" %d * %d * %d * %d = %ld",tmax[0],tmax[1],tmax[2],tmax[3],max);
    return max;
}


/*void diagonalupper(int t[20][20],int n)
{
    int i,j;
    long max=0,p;
    int tmax[4]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-4-i;j++)
        {
            p=t[i][j]*t[i+1][j+1]*t[i+2][j+2]*t[i+3][j+3];
            if(p>max)
            {
                max=p;
                tmax[0]=t[i][j];
                tmax[1]=t[i+1][j+1];
                tmax[2]=t[i+2][j+2];
                tmax[3]=t[i+3][j+3];
            }
        }
    }
    printf(" %d * %d * %d * %d = %ld",tmax[0],tmax[1],tmax[2],tmax[3],max);

}*/

long firstdiagonal(int t[20][20],int n)
{
    int i,j,k;
    long max=0,p;
    int tmax[4]={0};

        for(j=0;j<n-4+1;j++)
        {
            for(i=0;i<n-4+1;i++)
            {
                p=t[i][j]*t[i+1][j+1]*t[i+2][j+2]*t[i+3][j+3];

                //printf("\n%d * %d * %d * %d \n",t[i][j],t[i+1][j+1],t[i+2][j+2],t[i+3][j+3]);

                if(p>max)
                {
                    max=p;
                    tmax[0]=t[i][j];
                    tmax[1]=t[i+1][j+1];
                    tmax[2]=t[i+2][j+2];
                    tmax[3]=t[i+3][j+3];
                }

            }
            //printf("\n-------------------------\n");
        }
    printf(" %d * %d * %d * %d = %ld",tmax[0],tmax[1],tmax[2],tmax[3],max);
    return max;
}

long seconddiagonal(int t[20][20],int n)
{
    int i,j,k;
    long max=0,p;
    int tmax[4]={0};

        for(j=n-1;j>=3;j--)
        {
            for(i=0;i<n-4+1;i++)
            {
                p=t[i][j]*t[i+1][j-1]*t[i+2][j-2]*t[i+3][j-3];

                //printf("\n%d * %d * %d * %d \n",t[i][j],t[i+1][j-1],t[i+2][j-2],t[i+3][j-3]);

                if(p>max)
                {
                    max=p;
                    tmax[0]=t[i][j];
                    tmax[1]=t[i+1][j-1];
                    tmax[2]=t[i+2][j-2];
                    tmax[3]=t[i+3][j-3];
                }

            }
            //printf("\n-------------------------\n");
        }
    printf(" %d * %d * %d * %d = %ld",tmax[0],tmax[1],tmax[2],tmax[3],max);

    return max;
}

/**void premierdiagonal(int t[20][20],int n)
{
    int i,j,k;
    long max=0,p;
    int tmax[4]={0};

        for(j=n-1;j>=3;j--)
        {
            for(i=n-1;i>=3;i--)
            {
                p=t[i][j]*t[i-1][j-1]*t[i-2][j-2]*t[i-3][j-3];

                //printf("\n%d * %d * %d * %d \n",t[i][j],t[i-1][j-1],t[i-2][j-2],t[i-3][j-3]);

                if(p>max)
                {
                    max=p;
                    tmax[0]=t[i][j];
                    tmax[1]=t[i-1][j-1];
                    tmax[2]=t[i-2][j-2];
                    tmax[3]=t[i-3][j-3];
                }

            }
            //printf("\n-------------------------\n");
        }
    printf(" %d * %d * %d * %d = %ld",tmax[0],tmax[1],tmax[2],tmax[3],max);
}*/

void main()
{
    printf("En Marche\n");

    FILE* f=NULL;
    f=fopen("liste20x20.txt","r+");
    if(f==NULL)
    {
        printf("Erreur ouverture fichier");
        return 1;
    }

    int i,j;
    long n,max=0;
    int t[20][20]={0};
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            fscanf(f,"%d",&t[i][j]);
        }
    }
    printf("\n");
    affichematrice(t,20);

    printf("\nLargest(x)      = ");
    n=x(t,20);
    if(n>max)
        max=n;

    printf("\nLargest(y)      = ");
    n=y(t,20);
    if(n>max)
        max=n;

    printf("\nfirst diagonal  = ");
    n=firstdiagonal(t,20);
    if(n>max)
        max=n;

    printf("\nsecond diagonal = ");
    n=seconddiagonal(t,20);
    if(n>max)
        max=n;

    printf("\n\nThe greatest product of four adjacent numbers in the same direction is %ld",max);
}
