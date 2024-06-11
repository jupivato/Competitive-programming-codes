#include<bits/stdc++.h>
using namespace std;

typedef struct data
{
    int letra;
    int quant;
}dt;

bool organiza (dt a, dt b)
{
    if(a.quant!=b.quant)
        return a.quant<b.quant;

    return a.letra>b.letra;
}

int main()
{
    bool prim = true;
    string pal;
    while(cin>>pal)
    {
        if(prim) prim = false;
        else cout<<endl;
        int tam=pal.size();
        int word[tam];
        for(int i=0; i<tam; i++) word[i]=pal[i];
        //FUNCIONOU CONVERSAO for(int i=0; i<tam; i++) cout<<word[i]<<" ";
        int ascii[256] = {0};
        dt dados [256];
        for(int i=0; i<tam; i++) ascii[word[i]]++;
        vector<dt>list;
        for(int i=33; i<=127; i++)
        {
            if(ascii[i]!=0)
            {
                dados[i].letra=i;
                dados[i].quant=ascii[i];
                list.push_back(dados[i]);
            }
        }
        sort(list.begin(), list.end(), organiza);
        int size = list.size();
        for(int i=0; i<size; i++)
        {
             cout<<list[i].letra<<" ";
             cout<<list[i].quant<<endl;
        }
    }
    return 0;
}