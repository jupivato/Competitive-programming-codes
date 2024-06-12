#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

int main()
{
    int casos;
    while (cin >> casos)
    {
        vector<string>numeros;
        for (int i = 0; i < casos; i++)
        {
            string aux;
            cin >> aux;
            numeros.push_back(aux);
        }
        sort(numeros.begin(), numeros.end());
        for (int i = 0; i < numeros.size(); i++) cout << numeros[i] << endl;
    }
    return 0;
}
