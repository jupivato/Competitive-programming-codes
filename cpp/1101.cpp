#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quant, x = 1, y = 1;
    while (1)
    {
        cin >> x >> y;
        if (x <= 0 || y <= 0) return 0;
        int total = 0;
        for (int i = min(x,y); i <= max(x,y); i++)
        {
            cout << i << " ";
            total += i;
        }
        cout << "Sum=" << total << endl;
    }
return 0;
}
