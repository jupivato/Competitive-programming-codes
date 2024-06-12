#include<bits/stdc++.h>

using namespace std;

int main()
{
    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        int aux;
        cin >> aux;
        soma += aux;
    }
    cout << soma - 3 << endl;
    return 0;
}