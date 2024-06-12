#include<bits/stdc++.h>

using namespace std;

int main()
{
    int resp, aux, cont = 0;
    cin >> resp;
    for (int i = 0; i < 5; i++)
    {
        cin >> aux;
        if (aux == resp) cont++;
    }
    cout << cont << endl;
    return 0;
}