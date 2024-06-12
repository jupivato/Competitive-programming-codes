#include <bits/stdc++.h>
#define INF 0x3F3F3F3F // valor de infinito
using namespace std;

int main()
{
    int tam;
    cin >> tam;
    while (tam)
    {
        int elemento = 1, in = 0, fim = tam, mat[tam][tam];
        while (1)
        {
            for (int i = in; i < fim; i++)
                for (int j = in; j < fim; j++)
                    mat[i][j] = elemento;
            if (fim == 0) break;
            fim--;
            in++;
            elemento++;
        }
        for (int linha = 0; linha < tam; linha++)
		{
			for (int coluna = 0; coluna < tam; coluna++)
			{
				if (coluna == 0)
					printf("%3hd", mat[linha][coluna]);
				else
					printf(" %3hd", mat[linha][coluna]);

			}

			printf("\n");
		}

		printf("\n");
        cin >> tam;
    }
    return 0;
}