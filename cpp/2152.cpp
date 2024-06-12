#include<bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    while (casos--)
    {
        int hora, min, abriu;
        cin >> hora >> min >> abriu;
        if (hora >= 10) cout << hora << ":";
        else cout << "0" << hora << ":";
        if (min >= 10) cout << min << " - ";
        else cout << "0" << min << " - ";
        if (abriu) cout << "A porta abriu!" << endl;
        else cout << "A porta fechou!" << endl;
    }
    return 0;
}