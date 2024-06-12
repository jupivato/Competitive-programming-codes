#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    while (1)
    {
        cin >> x;
        if (x == 0) return 0;
        int total = 0, cont = 0;
        while (cont < 5)
        {
            if (x % 2 == 0)
            {
                total += x;
                cont++;
                x += 2;
            }
            else x++;
        }
        cout << total << endl;
    }
}
