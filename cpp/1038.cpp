#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double res;
    switch(a)
    {
        case 1:
            res = b * 4;
            break;
        case 2:
            res = b * 4.5;
            break;
        case 3:
            res = b * 5;
            break;
        case 4:
            res = b * 2;
            break;
        case 5:
            res = b * 1.5;
            break;
    }
    cout << "Total: R$ " << setprecision(2) << fixed << res << endl;
    return 0;
}