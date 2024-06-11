#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (cin>>num)
    {
        float h, c, l, x, a;
        cin>>h>>c>>l;
        x=((sqrt((h*h)+(c*c)))*num)/100;
        a=(x)*(l/100);
        cout<<setprecision(4)<<fixed<<a<<endl;
    }
    return 0;
}