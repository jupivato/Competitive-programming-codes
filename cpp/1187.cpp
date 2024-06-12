#include <bits/stdc++.h>
#define INF 0x3F3F3F3F // valor de infinito
using namespace std;

int main()
{
    double mat[12][12];
    char op;
    int end = 12, begin = -1;
    cin >> op;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> mat[i][j];
    double soma = 0;
    for (int i = 0; i < 6; i++)
    {
        begin++;
        end--;
        for (int j = 0; j < 12; j++)
            if (j > begin && j < end) soma += mat[i][j];
    }
    if (op == 'S') cout << setprecision(1) << fixed << soma << endl;
    else if (op == 'M') cout << setprecision(1) << fixed << soma / 30 << endl;
    return 0;
}