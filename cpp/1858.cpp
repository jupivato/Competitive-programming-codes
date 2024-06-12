#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int casos, t[100], menor=30, i, pos;

        cin>>casos;
        for (i=1; i<=casos; i++)
        {
        cin>>t[i];
        if (t[i]<menor)
        {
            menor=t[i];
            pos=i;
        }
        }
    cout<<pos<<endl;
    return 0;
}