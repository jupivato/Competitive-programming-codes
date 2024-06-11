#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin>>casos;
    string frase, aux;
    vector<int>tamanho;
    vector<string>palavras;
    
    while(casos--)
    {
        vector<string>palavras;
        vector<int>tamanho;
        do
        {
            getline(cin, frase);
        }
        while(frase.size()==0);

        int tam= frase.size();

        for (int i=0; i<tam; i++)
        {
            if (i==(tam-1))
            {
                aux += frase[i];
                palavras.push_back(aux);
                tamanho.push_back(aux.size());
                aux = "";
            }
            else if(frase[i]!=' ')
            {
                aux += frase[i];
            }
            else
            {
                palavras.push_back(aux);
                tamanho.push_back(aux.size());
                aux="";
            }
        }

        sort(tamanho.begin(), tamanho.end());
        int loop = tamanho.size();

        reverse(tamanho.begin(), tamanho.end());

        bool verifica[loop];
        for(int i=0; i<loop; i++)
        {
            verifica[i]=true;
        }
        bool first = true;
        for(int i=0; i<loop; i++)
        {
            for(int j=0; j<loop; j++)
            {
                if(tamanho[i]==palavras[j].size())
                {
                    if(verifica[j])
                    {
                        verifica[j]=false;
                        if (first)
                        {
                            first = false;
                            cout<<palavras[j];
                        }
                        else{
                        cout<<" "<<palavras[j];
                        }
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}