#include <bits/stdc++.h>

using namespace std;

int main()
{
    float vet[100];
    for (int i = 0; i < 100; i++)  cin >> vet[i];
    for (int i = 0; i < 100; i++) 
        if (vet[i] <= 10.0) cout << "A[" << i << "] = " << setprecision(1) << fixed <<  vet[i] << endl;
    return 0;
}