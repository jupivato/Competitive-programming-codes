#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b, n;
    bool check;
    cin>>b>>n;
    while(b||n)
    {
        int reserva[23];
        check = false;
        int d, c, v;

        for (int i = 1; i <= b; i++) cin>>reserva[i];

        for (int i = 1; i <= n; i++)
        {
            cin>>d>>c>>v;
            reserva[d] -= v;
            reserva[c] += v;
        }

        for (int i = 1; i <= b; i++)
            if(reserva[i] < 0)
            {
                check = true;
                break;
            }

        if(check) cout<<"N"<<endl;
        else cout<<"S"<<endl;
        cin>>b>>n;
    }

    return 0;
}