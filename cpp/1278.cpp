#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    cin.ignore();
    while(n)
    {
        vector<string>frase(n);
        int maior = 0;

        for(int i = 0; i < n; i++)
        {
            do
            {
                getline(cin, frase[i]);
            } while (frase[i].empty());
        }

        for (int i = 0; i < n; i++)
        {
            string aux = "";
            int auxt = frase[i].size();
            for(int j = 0; j < auxt; j++)
            {
                if(j == 0 && frase[i][j] == ' ') continue;
                else if (j == auxt-1 && frase[i][j] == ' ') break;
                else if(frase[i][j] != ' ') aux+=frase[i][j];
                else if (frase[i][j] == ' ' && frase [i][j-1]!= ' ') aux += frase[i][j];
                else if (frase[i][j] == ' ' && frase[i][j-1] == ' ') continue;
            }
            if(!aux.empty() && aux.back() == ' ') aux.pop_back(); // trata espaço no final da frase
            frase[i] = aux;
            //cout <<"oi" << frase[i] << "oi" << endl;
            if(frase[i].length() > maior) maior = frase[i].length();
        }

        //cout << maior << endl;
        //tratar espaço depois do fim da frase
        //retirar os cout desnecessários

        for(int i = 0; i < n; i++)
        {
            int tam = frase[i].length();
            string linha = frase[i];
            linha.insert(0, maior-tam, ' ');
            cout << linha << endl;
            //cout << "Frase = " << frase[i] << endl;
            //cout << "Tamanho da frase = " << frase[i].length() << endl << endl;
        }
        cin >> n;
        if(n!=0) cout << endl;
        cin.ignore();
    }
    return 0;
}