#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= num; ++i)
        if (i % 2 == 0) cout << i << "^2 = " << i * i << endl;
    return 0;
}
