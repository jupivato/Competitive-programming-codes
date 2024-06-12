#include<bits/stdc++.h>

using namespace std;

int main()
{
    float a, b , c;
    cin >> a >> b >> c;
    if (abs(a - b) < c && abs(a - c) < b && abs(b - c) < a)
        cout << "Perimetro = " << setprecision(1) << fixed << a + b + c << endl;
    else 
        cout << "Area = " << setprecision(1) << fixed << ((a + b) * c) / 2 << endl;
    return 0;
}