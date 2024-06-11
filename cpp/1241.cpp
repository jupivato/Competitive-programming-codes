#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--)
    {
        string n1, n2;
        cin>>n1>>n2;
        int t1, t2;
        t1=n1.size();
        t2=n2.size();
        if(t2>t1) cout<<"nao encaixa"<<endl;
        else
        {
            reverse(n1.begin(), n1.end());
            reverse(n2.begin(), n2.end());

            string aux;
            for(int i=0; i<t2; i++)
            {
                aux+=n1[i];
            }

            if(aux==n2)cout<<"encaixa"<<endl;
            else cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}