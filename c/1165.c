#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, casos;
    scanf("%d", &casos);
    while(casos--)
    {
        scanf("%d", &num);
        bool ehprimo = true;
        if(num != 2 && num % 2 == 0) ehprimo = false;
        else
        {
            for (int i = 3; i < num/2 ; ++i )
            {
                if(num % i == 0)
                {
                    ehprimo = false;
                    break;
                }
            }
        }
        if(ehprimo) printf ("%d eh primo\n", num);
        else printf ("%d nao eh primo\n", num);
    }
    return 0;
}