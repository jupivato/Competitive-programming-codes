#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num;
    int cont = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        if (num > 0) cont++;
    }
    cout << cont << " valores positivos" << endl;
    return 0;
}