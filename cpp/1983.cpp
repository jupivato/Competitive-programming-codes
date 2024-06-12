#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant, mat = 0;
    float maior = 0;
    cin >> quant;
    while (quant--)
    {
        int matricula;
        float nota;
        cin >> matricula >> nota;
        if (nota >= 8 && nota > maior)
        {
            maior = nota;
            mat = matricula;
        }
    }
    if (maior == 0) cout << "Minimum note not reached" << endl;
    else cout << mat << endl;
    return 0;
}