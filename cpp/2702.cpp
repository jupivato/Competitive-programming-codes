#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int a, b, c, d, e, f, total = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if (a < d) total += d - a;
    if (b < e) total += e - b;
    if (c < f) total += f - c;
    cout << total << endl;
    return 0;
}