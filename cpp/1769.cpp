#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string cpf;
    int cpfn[11];
    while(cin >> cpf)
    {
        string aux = "";
        bool valido = true;
        int cb1 = 0, cb2 = 0;
        for (int i = 0; i < 14; ++i)
            if(cpf[i] != '.' && cpf[i] != '-') aux += cpf[i];
        //cout << aux;
        for (int i = 0; i < 11; i++) cpfn[i] = aux[i]-48;
        //for (int i = 0; i < 11; i++) cout << cpfn[i];
        //cout << endl;
        int x = 9;
        for (int i = 0; i < 9; ++i)
        {
            cb1 += cpfn[i]*(i+1);
            cb2 += cpfn[i]*x;
            --x;
        }

        int aux1, aux2;
        aux1 = cb1 % 11;
        aux2 = cb2 % 11;
        if(aux1 != 10 && aux2 != 10 && aux1 != cpfn[9] || aux2 != cpfn[10]) valido = false;
        else 
        {
            if (aux1 == 10 && aux2 != 10 && cpfn[9] != 0 || aux2 !=  cpfn[10]) valido = false;
            else if (aux1 != 10 && aux2 == 10 && aux1 != cpfn[9] || cpfn[10] != 0) valido = false;
            else if (aux1 == 10 && aux2 == 10 && cpfn[9] != 0 || cpfn[10] != 0) valido = false;
        }
        if(valido) cout << "CPF valido" << endl;
        else cout << "CPF invalido" << endl;

    }
    return 0;
}