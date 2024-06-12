#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

int main()
{
    double volume, diametro, raio, altura, area;
    while (cin >> volume >> diametro)
    {
        raio = diametro / 2;
        area = PI * raio *  raio;
        altura = volume / area;
        cout << "ALTURA = " << setprecision(2) << fixed << altura << endl;
        cout << "AREA = " << setprecision(2) << fixed << area << endl;
    }
}