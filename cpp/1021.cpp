#include <bits/stdc++.h>
using namespace std;

int main()
{
    double v, transf;
    int x, y, cents;

    cin>> v;

    x = v;
    transf = v * 100;
    cents = (int)transf % 100;

    cout<< "NOTAS:" << endl;
    cout<< x/100;
    cout<< " nota(s) de R$ 100.00" << endl;
    x = x % 100;
    cout<< x/50;
    cout<<" nota(s) de R$ 50.00" << endl;
    x = x % 50;
    cout<< x/20;
    cout<< " nota(s) de R$ 20.00" << endl;
    x = x % 20;
    cout<< x/10;
    cout<< " nota(s) de R$ 10.00" << endl;
    x = x % 10;
    cout<< x/5;
    cout<< " nota(s) de R$ 5.00" << endl;
    x = x % 5;
    cout<< x/2;
    cout<<" nota(s) de R$ 2.00" << endl;
    x = x % 2;

    cout << "MOEDAS:" << endl;
    cout<< x;
    cout<< " moeda(s) de R$ 1.00" << endl;
    y = cents;
    cout<< y/50;
    cout<< " moeda(s) de R$ 0.50" << endl;
    y = cents % 50;
    y = y % 50;
    cout<< y/25;
    cout<< " moeda(s) de R$ 0.25" << endl;
    y = cents % 25;
    cout<< y/10;
    cout<< " moeda(s) de R$ 0.10" << endl;
    y = y % 10;
    cout << y/5;
    cout<< " moeda(s) de R$ 0.05" << endl;
    y = y % 5;
    cout << y/1;
    cout<< " moeda(s) de R$ 0.01" << endl;

    return 0;
}

