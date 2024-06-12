#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int casos;
    cin >> casos;
    for (int i = 1; i <= casos; i++)
    {
        string modo;
        cin >> modo;
        int r, g, b;
        cin >> r >> g >> b;
        cout << "Caso #" << i << ": ";
        if (modo == "min") cout << min(r,min(g,b)) << endl;
        else if (modo == "max") cout << max(r,max(g,b)) << endl;
        else if (modo == "mean") cout << (int)((r + g + b) / 3) << endl;
        else cout << (int)(0.3 * r + 0.59 * g + 0.11 * b) << endl;
    }
    return 0;
}