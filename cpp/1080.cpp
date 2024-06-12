#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maior = 0, pos; 
    for (int i = 0; i < 100; i ++)
    {
        int aux;
        cin >> aux;
        if (aux > maior)
        {
            maior = aux;
            pos = i + 1;
        }
    }
    cout << maior << endl << pos << endl;
    return 0;
}
