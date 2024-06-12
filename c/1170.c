#include <stdio.h>

int main ()
{
    int casos;
    scanf("%d", &casos);
    while(casos --)
    {
        double food;
        int cont = 0;
        scanf("%lf", &food);
        while(food > 1.0)
        {
            food /= 2;
            ++cont;
        }
        printf("%d dias\n", cont);
    }
    return 0;
}