#include<stdio.h>
#define INF 0x3F3F3F3F

int main()
{   
    int minutos = 0, a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3); 

    if(a2 >= a3 && a2 >= a1) minutos = (a3 + a1) * 2;
    else if (a3 >= a1 && a3 >= (a1 + a2)) minutos = (a1 * 4) + (a2 * 2);
    else if (a1 >= a3 && a1 >= (a2 + a3)) minutos = (a3 * 4) + (a2 * 2);
    else minutos = (a3 + a1) * 2;

    printf("%d\n", minutos);

    return 0;
}