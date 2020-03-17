#include <stdio.h>
#include <gmp.h>
int main()
{
    FILE* f=NULL;
    f=fopen("Liste100x50.txt","r");
    if(f==NULL)
    {
        printf("Erreur d'ouverture fichier");
        exit(1);
    }
    mpz_t x,y,z;
    mpz_init(x);
    mpz_init(y);
    mpz_init(z);
    char ch[51];
    mpz_init_set_str(x,"0",10);
    for(int i=1;i<=100;i++)
    {
        fgets(ch,52,f);
        mpz_init_set_str(y,ch,10);
        mpz_add(z,x,y);
        mpz_init_set(x,z);
    }
    mpz_out_str(stdout,10,x);
    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(z);
}
