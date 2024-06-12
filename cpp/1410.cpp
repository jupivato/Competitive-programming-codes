#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int A, D, at, de;

    while(cin>>A>>D)
    {
        vector<int>a;
        vector<int>d;
        if(!A && !D)
        {
            break;
        }

        for (int i=0; i<A; i++)
        {
            cin>>at;
            a.push_back(at);
        }

        for (int i=0; i<D; i++)
        {
            cin>>de;
            d.push_back(de);
        }

        sort(a.begin(), a.end());
        sort(d.begin(), d.end());

        int penultimo = d[1];
        int atacante = a[0];

        if (atacante < penultimo )
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
    return 0;
}