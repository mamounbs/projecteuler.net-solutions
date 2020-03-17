#include <stdio.h>
#include <stdlib.h>

int sd=0;
int sg=0;

int maxm (int tab[10][10],int n,int i,int j)
{
    if(i!=n)
    {
         sg=tab[i][j]+maxm(tab,n,i+1,j-1);
          printf("sg: %d\n",sg);
         sd=tab[i][j]+maxm(tab,n,i+1,j+1);
        printf("sd: %d\n",sd);

        return (sg>sd)?sg:sd;
    }
    return tab[i][j];
}
void main()
{

    int m[10][10];

    m[0][3]=3;

    m[1][2]=7;
    m[1][4]=4;

    m[2][1]=2;
    m[2][3]=4;
    m[2][5]=6;

    m[3][0]=8;
    m[3][2]=5;
    m[3][4]=9;
    m[3][6]=3;
    printf("%d",maxm(m,3,0,3));

}
