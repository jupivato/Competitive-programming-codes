#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sal;
    cin >> sal;
    double res = 0, aux = sal;
    if (aux > 4500)
    {
        res += (aux - 4500) * 0.28;
        aux = 4500;
    }
    if (aux > 3000)
    {
        res += (aux - 3000) * 0.18;
        aux = 3000;
    }
    if (aux > 2000)
    {
        res += (aux - 2000) * 0.08;
        aux = 2000;
    }
    if (res == 0) cout << "Isento" << endl;
    else cout << "R$ " << setprecision(2) << fixed << res << endl;
    return 0;
}