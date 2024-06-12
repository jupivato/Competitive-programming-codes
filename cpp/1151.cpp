#include <bits/stdc++.h>

using namespace std;

int vet[46];

int fibonacci ()
{
    for (int i = 3; i < 46; i++) vet[i] = vet [i -1] + vet[i -2];
}

int main()
{
    vet[0] = 0;
    vet[1] = 1;
    vet[2] = 1;
    fibonacci();
    int num;
    cin >> num;
    for (int i = 0; i < num - 1; i++) cout << vet[i] << " ";
    cout << vet[num - 1] << endl;
    return 0;
}
