#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c = -2;
    for (int i = 1; i <= 9; i += 2)
    {
        c += 2;
        for (int j = 7 + c; j > 4 + c; j--) cout << "I=" << i << " J=" << j << endl;
    }
    return 0;
}
