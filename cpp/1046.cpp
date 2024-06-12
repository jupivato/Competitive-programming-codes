#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1, h2, res;
    cin >> h1 >> h2;
    if (h2 > h1) res = h2 - h1;
    else if (h2 == h1) res = 24;
    else res = 24 - (h1 - h2);
    cout << "O JOGO DUROU " << res << " HORA(S)" << endl;
    return 0;
}