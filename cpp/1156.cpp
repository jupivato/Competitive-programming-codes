#include<bits/stdc++.h>

using namespace std;

int main()
{
    float soma = 1;
    float b = 2;
    for(int i = 3; i < 40; i++)
    {
            soma += (float)i / b;
            i++;
            b *= 2;
    }
    cout << setprecision(2) << fixed << soma << endl;;
    return 0;
}