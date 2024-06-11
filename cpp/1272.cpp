#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string frase, hidden;
    int casos, tam, i;

    cin>>casos;

    while(casos--)
    {
        hidden = "";
        do
        {
            getline(cin, frase);
        } while (frase.size()==0);
        
        tam=frase.size();

        for (i=0; i<tam; i++)
        {
            if(i==0 && frase[i] != ' ') hidden+=frase[0];
            else if (frase[i] == ' ' ) continue;
            else if (frase[i-1] != ' ') continue;
            else hidden+=frase[i];
        }
        cout<<hidden<<endl;
    }
    return 0;
}