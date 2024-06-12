#include <bits/stdc++.h>

using namespace std;

int main()
{
    int alc = 0, gas = 0, die = 0, op;
    while (op != 4)
    {
        cin >> op;
        if (op == 1) alc++;
        else if (op == 2) gas++;
        else if (op == 3) die++;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << die << endl;
    return 0;
}
