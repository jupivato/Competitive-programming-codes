#include <bits/stdc++.h>
#define PI 3.14159
#define G 9.80665

using namespace std;

int main ()
{
    double h, alpha, v, theta, vox, voy, td, ts, tt, D, H, vfy;
    int p1, p2, n;
    while (cin >> h)
    {
        cin >> p1 >> p2 >> n;
        while (n--)
        {
            cin >> alpha >> v;
            theta = (alpha * PI) / 180.0;
            vox = v * cos (theta);
            voy = v * sin (theta);
            ts = voy / G;
            H = (voy * voy) / (2 * G) + h;
            vfy = sqrt(2 * G * H);
            td = vfy / G;
            tt = ts + td;
            D = vox * tt;
            if (D >= p1 && D <= p2) cout << fixed << setprecision(5) << D << " -> DUCK" << endl;
            else cout << fixed << setprecision(5) << D << " -> NUCK" << endl;
        }
    }
    return 0;
}