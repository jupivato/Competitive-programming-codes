#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n)
    {
        queue<int>cartas;
        vector<int>desc;
        for(int i=1; i<=n; i++) cartas.push(i);//insere as cartas
        while(cartas.size()!=1)
        {
            int aux=cartas.front();
            desc.push_back(aux);
            cartas.pop();
            aux = cartas.front();
            cartas.push(aux);
            cartas.pop();

        }
        int tam = desc.size();
        cout<<"Discarded cards: ";
        for(int i=0; i<tam; i++)
        {
            if(i!=tam-1) cout<<desc[i]<<", ";
            else cout<<desc[i]<<endl;
        }
        int res =cartas.front();
        cout<<"Remaining card: "<<res<<endl;
        cin>>n;
    }
    return 0;
}