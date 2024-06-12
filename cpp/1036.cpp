#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    delta = (b * b - 4 * a * c);
    if (delta < 0)
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    cout << "R1 = " << setprecision(5) << fixed << x1 << endl;
    cout << "R2 = " << setprecision(5) << fixed << x2 << endl;
    return 0;
}