#include<bits/stdc++.h>

using namespace std;

int main()
{   
    string ordem;
    while (cin >> ordem)
    {
        int tam;
        cin >> tam;
        for (int i = 0; i < tam; i++)
        {
            int aux;
            cin >> aux;
            cout << ordem[aux - 1];
        }
        cout << endl;
    }
    return 0;
}