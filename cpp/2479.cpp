#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("C:\\Users\\julia\\input.txt", "r", stdin);
    vector<string>nomes;
    string nome;
    char comportamento;
    int num;

    cin>>num;

    int somaok = 0;
    int somaruim = 0;

    for(int i=0; i<num; i++)
    {
        cin>>comportamento>>nome;
        if (comportamento =='+')
        {
            somaok+=1;
        }
        else
        {
        somaruim+=1;
        }
        nomes.push_back(nome);
    }

    sort(nomes.begin(), nomes.end());

    for (int i=0; i<num; i++)
    {
        cout<<nomes[i]<<endl;
    }
    cout<< "Se comportaram: "<< somaok<< " | Nao se comportaram: "<< somaruim<< endl;
    return 0;
}