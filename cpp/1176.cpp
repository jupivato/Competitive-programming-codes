#include <bits/stdc++.h>

using namespace std;

long long int vet[90];

int fibonacci ()
{
    for (int i = 3; i <= 60; i++) vet[i] = vet [i -1] + vet[i -2];
}

int main()
{
    vet[0] = 0;
    vet[1] = 1;
    vet[2] = 1;
    fibonacci();
    int num, quant;
    cin >> quant;
    while (quant--)
    {
        cin >> num;
        cout << "Fib(" << num << ") = " << vet[num] << endl;
    }
    return 0;
}