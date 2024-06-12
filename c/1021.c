#include <stdio.h>
#include <math.h>

int main()
{
    double v, transf;
    int x, y, cents;

    scanf("%lf", &v);

    x = v;
    transf = v * 100;
    cents = (int)transf % 100;

    printf("NOTAS:\n");
    printf("%d",x/100);
    printf(" nota(s) de R$ 100.00\n");
    x = x % 100;
    printf("%d",x/50);
    printf(" nota(s) de R$ 50.00\n");
    x = x % 50;
    printf("%d",x/20);
    printf(" nota(s) de R$ 20.00\n");
    x = x % 20;
    printf("%d",x/10);
    printf(" nota(s) de R$ 10.00\n");
    x = x % 10;
    printf("%d",x/5);
    printf(" nota(s) de R$ 5.00\n");
    x = x % 5;
    printf("%d",x/2);
    printf(" nota(s) de R$ 2.00\n");
    x = x % 2;

    printf("MOEDAS:\n");
    printf("%d",x);
    printf(" moeda(s) de R$ 1.00\n");
    y = cents;
    printf("%d",y/50);
    printf(" moeda(s) de R$ 0.50\n");
    y = cents % 50;
    y = y % 50;
    printf("%d",y/25);
    printf(" moeda(s) de R$ 0.25\n");
    y = cents % 25;
    printf("%d",y/10);
    printf(" moeda(s) de R$ 0.10\n");
    y = y % 10;
    printf("%d",y/5);
    printf(" moeda(s) de R$ 0.05\n");
    y = y % 5;
    printf("%d",y/1);
    printf(" moeda(s) de R$ 0.01\n");


    return 0;
}



