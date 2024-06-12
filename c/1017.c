#include<stdio.h>

int main ()
{
    int t, vm, dist;
    float l;

    scanf ("%d", &t);
    scanf("%d", &vm);

    dist=vm*t;
    l=dist/12.0;

    printf("%.3f\n", l);

    return 0;
}
