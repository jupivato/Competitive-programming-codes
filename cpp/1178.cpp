#include <bits/stdc++.h>

using namespace std;

int main()
{
    double vet[100], t;
    cin >> t;
    vet[0] = t;
    for (int i = 1; i < 100; i++)
    {
        vet[i] = t / 2;
        t /= 2;
    }
    for (int i = 0; i < 100; i++) cout << "N[" << i << "] = " << setprecision(4) << fixed << vet[i] << endl;
    return 0;
}