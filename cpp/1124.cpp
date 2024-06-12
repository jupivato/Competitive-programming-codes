#include<bits/stdc++.h>
#define PI 3.1415926535897932384626433832795

using namespace std;

int main()
{
    int l, c, r1, r2;
    cin >> l >> c >> r1 >> r2;
    while(l || c || r1 || r2)
    {
        char saida = 'N';
        int maior;
        if (r1 > r2) maior = r1*2;
        else maior = r2*2;
        if (maior <= l && maior <= c )
            if (sqrt(pow((l - r2 - r1), 2) + pow((c - r2 - r1), 2)) >= r1 + r2)
                saida = 'S';
        cout << saida << endl;
        cin >> l >> c >> r1 >> r2;
    }
    return 0;
}
