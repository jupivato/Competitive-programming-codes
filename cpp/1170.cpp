#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int casos;
    cin >> casos;
    while(casos --)
    {
        double food;
        int cont = 0;
        cin >> food;
        while(food > 1.0)
        {
            food /= 2;
            ++cont;
        }
        cout << cont << " dias" << endl;
    }
    return 0;
}