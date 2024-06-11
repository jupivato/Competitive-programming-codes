#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("C:\\Users\\julia\\input.txt", "r", stdin);
    int m, n;
    cin>>n>>m;
    while(m && n)
    {
        int a, casos[2001];
        for (int i=1; i<2001; i++)
        {
            casos[i]=0;
        }
        for (int i=1; i<=m; i++)
        {
            cin>>a;
            casos[a]++;
        }
        /*for (int i=1; i<=n; i++)
        {
            cout<<i<<"- "<<casos[i]<<endl;
        }*/
        int soma = 0;
        for (int i=1; i<=n; i++)
        {
            if(casos[i]!=0 && casos[i]!=1)
            {
            soma++;
            }
        }
        cout<<soma<<endl;
        cin>>n>>m;
    }
    return 0;
}