#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant;
    cin >> quant;
    while (quant--)
    {
        string n1, n2;
        string pi1, pi2;
        string par, impar;
        int num1, num2, soma;
        cin >> n1 >> pi1 >> n2 >> pi2 >> num1 >> num2;
        if (pi1 == "PAR")
        {
            par = n1;
            impar = n2;
        }
        else 
        {
            par = n2;
            impar = n1;
        }
        soma = num1 + num2;
        if (soma % 2 == 0) cout << par << endl;
        else cout << impar << endl;
    }
    return 0;
}
