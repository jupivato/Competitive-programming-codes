#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
    int n, h, m, s;
    cin >> n;
    h = n / 3600;
    m = (n - h * 3600) / 60;
    s = (n - h * 3600 - m * 60);
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}