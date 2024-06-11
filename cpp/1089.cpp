#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>loop;
    while(n)
    {
        int quant = 0;
        vector<int>loop;
        for(int i=0; i<n; i++)
        {
            int aux;
            cin>>aux;
            loop.push_back(aux);
        }
        vector<int>newloop;
        newloop.push_back(loop[n-1]);
        for (int i=0; i<n; i++)
        {
            newloop.push_back(loop[i]);
        }
        newloop.push_back(loop[0]);
        for(int i=1; i<=n; i++)
        {
            if(newloop[i]<newloop[i-1] && newloop[i]<newloop[i+1]) quant++;
            else if(newloop[i]>newloop[i-1] && newloop[i]>newloop[i+1]) quant++;
        }
        cout<<quant<<endl;
        cin>>n;
    }
    return 0;
}