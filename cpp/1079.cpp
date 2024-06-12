#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        double aux1, aux2, aux3, media = 0;
        cin >> aux1 >> aux2 >> aux3;
        media += ((aux1 * 2) + (aux2 * 3) + (aux3 * 5));
        cout << setprecision(1) << fixed << media / 10 << endl;
    }
    return 0;
}
