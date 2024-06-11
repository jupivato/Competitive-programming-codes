#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--)
    {
        string frase;
        do
        {
            getline(cin, frase);
        } while (frase.size()==0);
        int tam = frase.size();
        int div= tam/2;
        string n="";
        for(int i=div-1; i>=0; i--)
        {
            n+=frase[i];
        }
        for(int i=tam-1; i>=div; i--)
        {
            n+=frase[i];
        }
        cout<<n<<endl;
    }
    return 0;
}