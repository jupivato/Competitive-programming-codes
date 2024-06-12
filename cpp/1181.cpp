#include <bits/stdc++.h>
#define MAX 12

using namespace std;

int main()
{
    float mat[MAX][MAX], res = 0;
    int l;
    char op;
    cin >> l >> op;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> mat[i][j];
    for (int i = 0; i < 12; i++) res += mat[l][i];
    if (op == 'S') cout << setprecision(1) << fixed << res << endl;
    else cout << setprecision(1) << fixed << res / 12 << endl;
    return 0;
}