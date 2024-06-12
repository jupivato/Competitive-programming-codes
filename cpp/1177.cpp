#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vet[1000], t, a = 0;
    cin >> t;
    for (int i = 0; i < 1000; i++)
    {
        if (a == t) a = 0;
        vet[i] = a;
        a++;
    }
    for (int i = 0; i < 1000; i++) cout << "N[" << i << "] = " << vet[i] << endl;
    return 0;
}