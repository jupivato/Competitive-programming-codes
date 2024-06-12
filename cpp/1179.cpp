#include <bits/stdc++.h>

using namespace std;

int main()
{
    int impar[5], par[5], ti = 0, tp = 0, aux;
    for (int i = 0; i < 15; i++)
    {
        cin >> aux;
        if (ti == 5)
        {
            for (int i = 0; i < 5; i++) 
                cout << "impar[" << i << "] = " << impar[i] << endl;
            ti = 0;
        }
        else if (tp == 5)
        {
            for (int i = 0; i < 5; i++) 
                cout << "par[" << i << "] = " << par[i] << endl;
            tp = 0;
        }
        if (aux % 2 == 0) 
        {
            par[tp] = aux;
            tp++;
        }
        else 
        {
            impar[ti] = aux;
            ti++;
        }
    }
    if (ti)
        for (int i = 0; i < ti; i++) 
            cout << "impar[" << i << "] = " << impar[i] << endl;
    if (tp)
        for (int i = 0; i < tp; i++) 
            cout << "par[" << i << "] = " << par[i] << endl;
    return 0;
}