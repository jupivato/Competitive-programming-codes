#include <bits/stdc++.h>

using namespace std;

int main ()
{
    
    char x;
    string y;
    cin >> x >> y;
    while(x != '0' || y != "0")
    {
        string aux1 = "", aux2 = "";
        int tam = y.length();
        for (int i = 0; i < tam; ++i)
            if(y[i] != x) aux1 += y[i];
        if (aux1[0] != '0' && aux1.length()!=0) cout << aux1 << endl;
        else if (aux1[0] == '0' && aux1.length() > 1)
        {
            while(aux1[0] == '0' && aux1.length() > 1)
            {
                int size = aux1.length();
                for (int i = 1; i < size; ++i) aux2 += aux1[i];
                aux1 = aux2;
                aux2 = "";
    
            }
            cout << aux1 << endl;
        }
        else if (aux1.length() == 0) cout << "0" << endl;
        cin >> x >> y;
    }   
    return 0;
}