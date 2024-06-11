#include<bits/stdc++.h>
using namespace std;

int main()
{
    int linhas, tam;
    bool prim = true;
    cin>>linhas;
    tam=linhas*4;
    for(int i=1; i<=tam; i++)
    {
        if(prim)
        {
            cout<<i;
            prim=false;
        }
        else
        {
            if(i%4==0)
            {
                cout<<" PUM"<<endl;
                prim = true;
            }
            else
            {
                cout<<" "<<i;
            }
        }
    }
    return 0;
}
