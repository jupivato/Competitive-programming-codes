#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant;
    cin >> quant;
    while (quant--)
    {
        string nome;
        int newtons;
        cin >> nome >> newtons;
        if (nome != "Thor") cout << "N" << endl;
        else cout << "Y" << endl;
    }
}