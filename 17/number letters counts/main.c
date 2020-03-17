#include <stdio.h>
#include <stdlib.h>

void aff(int t[], int n){
    for(int i=0; i<n; i++){
        printf("num %d : %d\n",i,t[i]);
    }
}

int main()
{
    int a[10]={0,3,3,5,4,4,3,5,5,4};
    int b[10]={3,6,6,8,8,7,7,9,8,8};
    int c[8]={6,6,5,5,5,7,6,6};

    printf("A:\n");
    aff(a,10);
    printf("B:\n");
    aff(b,10);
    printf("C:\n");
    aff(c,8);

    int d[79];

    int i,j,k=0;
    long s;
    for(i=0;i<8;i++)
        for(j=0; j<10; j++)
            {
                d[k]=a[j]+c[i];
                k++;
            }
    printf("D:\n");
    aff(d,80);

    int e[100];

    k=0;
    for(i=0;i<10;i++){
        e[k]=a[i];
        k++;
    }

    for(i=0;i<10;i++){
        e[k]=b[i];
        k++;
    }


    for(i=0;i<80;i++){
        e[k]=d[i];
        k++;
    }

    printf("E:\n");
    aff(e,100);

    int f[1000];

    for(i=0; i<100; i++)
        f[i]=e[i];

    for(j=1; j<10; j++)
    {
        for(k=0; k<100; k++)
        {
            f[i]=7+a[j]+e[k]+3;//7 for hundred and 3 for and
            i++;
        }
    }
    printf("F:");
    aff(f,1000);

    for(i=0,s=0;i<1000;i++){
        s+=f[i];
    }

    s-=16;//+11 for "one thousand" and -27 for "and" in every hundred(9*3)

    printf("\nS= %d",s);

}
