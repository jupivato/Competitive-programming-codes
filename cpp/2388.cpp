#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant;
    int result = 0;
    cin >> quant;
    while(quant--)
    {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        result += (aux1 * aux2);
    }
    cout << result << endl;
    return 0;
}