#include <bits/stdc++.h>
#define INF 0x3F3F3F3F // valor de infinito
#define MAX 101
using namespace std;

int main()
{
    int r;
    while (cin >> r)
    {
        int vel, maior = 0;
        for (int i = 0; i < r; i++)
        {
            cin >> vel;
            if (vel > maior) maior = vel;
        }
        if (maior < 10) cout << "1" << endl;
        else if (maior >= 10 && maior < 20) cout << "2" << endl;
        else cout << "3" << endl;
    }
    return 0;
}