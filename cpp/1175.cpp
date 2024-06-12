#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vet[20], j = 19;
    for (int i = 0; i < 20; i++)  cin >> vet[i];
    for (int i = 0; i < 10; i++)
    {
        int aux  = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
        j--;
    }
    for (int i = 0; i < 20; i++) cout << "N[" << i << "] = " << vet[i] << endl;
    return 0;
}