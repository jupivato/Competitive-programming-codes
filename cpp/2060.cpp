#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

int main()
{
    int quant, vet[1002], m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    cin >> quant;
    for (int i = 0; i < quant; i++) cin >> vet[i];
    for (int i = 0; i < quant; i++)
    {
        if (vet[i] % 2 == 0) m2++;
        if (vet[i] % 3 == 0) m3++;
        if (vet[i] % 4 == 0) m4++;
        if (vet[i] % 5 == 0) m5++;
    }
    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;
    return 0;
}
