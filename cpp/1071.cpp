#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, soma = 0, ma, me;
    cin >> num1 >> num2;
    if (num1 < num2)
    {
        ma = num2;
        me = num1;
    }
    else
    {
        ma = num1;
        me = num2;
    }
    for (int i = me + 1; i < ma; ++i)
       if (i % 2 != 0)  soma += i;
    cout << soma << endl;
    return 0;
}
