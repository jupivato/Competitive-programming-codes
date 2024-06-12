#include<stdio.h>

int main ()
{
    unsigned long long int a, b, soma, fac1, fac2, i, v1, v2;

    while((scanf("%llu%llu", &a, &b))!=EOF)
    {
            fac1=a;
            fac2=b;
            v1=a;
            v2=b;

            if (a==0)
            {
                fac1=1;
            }
            if (b==0)
            {
                fac2=1;
            }

            for (i=1; i<v1; i++)
            {
                fac1=fac1*(a-1);
                a--;
            }
            for (i=1; i<v2; i++)
            {
                fac2=fac2*(b-1);
                b--;
            }


        soma=fac1+fac2;

        printf("%llu\n", soma);
    }

    return 0;
}