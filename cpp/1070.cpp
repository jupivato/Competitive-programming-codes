#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, cont = 0;
    cin >> num;
    while (cont < 6)
    {
        if (num % 2 != 0)
        {
            cout << num << endl;
            ++cont;
        }
        ++num;
    }
    return 0;
}
