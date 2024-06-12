#include<stdio.h>

int main ()
{
    int i, x, y, num, n, m;

    scanf("%d", &num);
    while (num!=0)
    {
        scanf("%d", &m);
        scanf("%d", &n);
        for (i=0; i<num; i++)
        {
        scanf ("%d%d", &x, &y);
        if (x==m || y==n) printf("divisa\n");
        else if (x>m && y>n) printf("NE\n");
        else if (x>m && y<n) printf("SE\n");
        else if (x<m && y<n) printf("SO\n");
        else if (x<m && y>n) printf ("NO\n");
        }
        scanf("%d", &num);
    }
    return 0;
}
