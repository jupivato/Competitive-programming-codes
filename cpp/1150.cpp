#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, soma = 0, cont = 0;
    cin >> a >> n;
    while (n <= a) cin >> n;
    for (int i = a; i <= 0x3f3f3f3f ; i++)
    {
        if(soma < n)
        {
            soma += i;
            cont++;
        }
        else break;
    }
    cout << cont << endl;
    return 0;
}
