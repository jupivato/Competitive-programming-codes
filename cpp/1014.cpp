#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
    int a, b, c;
    int mab, m1c;
    cin >> a >> b >> c;
    mab = (a + b + abs(a - b)) / 2;
    m1c = (mab + c+ abs (mab - c)) / 2;
    if (mab > m1c) cout << mab << " eh o maior" << endl;
    else cout << m1c << " eh o maior" << endl;
    return 0;
}