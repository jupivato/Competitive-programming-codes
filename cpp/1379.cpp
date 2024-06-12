#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    while(a || b)
    {
        if (b > a) c = 2 * a - b;
        else if (a > b) c = 2 * b - a;
        else c = a;
        cout << c << endl;
        cin >> a >> b;
    }
    return 0;
}