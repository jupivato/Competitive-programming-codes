#include<bits/stdc++.h>
using namespace std;

int contanum (string ant, string atual)
{
    int cont=0;
    int size = ant.size();
    for(int i=0; i<size; i++)
    {
        if(ant[i]!=atual[i])
            return cont;
        cont++;
    }
    return cont;
}

int main()
{
    int casos;
    int cont=0;
    string aux;
    vector<string>telefones;
    while(cin>>casos)
    {
        cont=0;
        telefones.clear();
        for(int i=0; i<casos; i++)
        {
            cin>>aux;
            telefones.push_back(aux);
        }
        sort(telefones.begin(), telefones.end());
        int tam=telefones.size();
        for(int i=1; i<tam; i++) cont += contanum(telefones[i-1], telefones[i]);
        cout<<cont<<endl;
    }
    return 0;
}