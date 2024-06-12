#include <bits/stdc++.h>
#define INF 0x3F3F3F3F // valor de infinito
using namespace std;

int main()
{
    float mat[12][12];
    int col;
    char op;
    cin >> col >> op;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> mat[i][j];
    float soma = 0;
        for (int i = 0; i < 12; i++) 
            soma += mat[i][col];
    if (op == 'S') cout << setprecision(1) << fixed << soma << endl;
    else if (op == 'M') cout << setprecision(1) << fixed << soma / 12 << endl;
    return 0;
}