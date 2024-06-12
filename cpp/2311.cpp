#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int num;
    cin >> num;
    while (num--)
    {
        string nome;
        float soma = 0, dif, menor = 15, maior = 0;
        cin >> nome >> dif;
        for (int i = 0; i < 7; i++)
        {
            float aux;
            cin >> aux;
            if (aux < menor) menor = aux;
            if (aux > maior) maior = aux;
            soma += aux;
        }
        soma -= menor;
        soma -= maior;
        cout << nome << " " << setprecision(2) << fixed << soma * dif << endl;
    }
    return 0;
}