#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sal;
    cin >> sal;
    if (sal >= 0 && sal <= 400)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << sal + (sal * 0.15) << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << (sal + (sal * 0.15)) - sal << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (sal > 400 && sal <= 800)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << sal + (sal * 0.12) << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << (sal + sal * 0.12) - sal << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (sal > 800 && sal <= 1200)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << sal + (sal * 0.1) << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << (sal + (sal * 0.1)) - sal << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (sal > 1200 && sal <= 2000)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << sal + (sal * 0.07) << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << (sal + (sal * 0.07)) - sal << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (sal > 2000)
    {
        cout << "Novo salario: " << setprecision(2) << fixed << sal + sal * 0.04 << endl;
        cout << "Reajuste ganho: " << setprecision(2) << fixed << (sal + (sal * 0.04)) - sal << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}