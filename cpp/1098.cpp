#include <bits/stdc++.h>

using namespace std;

int main()
{
    float c = -0.2;
    for (float i = 0; i < 2.2; (i += 0.2))
    {
        c += 0.2;
        for (float j = 1; j <= 3; j++) cout << "I=" <<  i << " J=" << j + c << endl;
    }
    return 0;
}
