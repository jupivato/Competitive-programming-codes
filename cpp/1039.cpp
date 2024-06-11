#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1, x2, y1, y2, r1, r2, d;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2)
    {
        abs(x1);
        abs(x2);
        abs(y1);
        abs(y2);
        d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        if(r1>=d+r2) cout<<"RICO"<<endl;
        else cout<<"MORTO"<<endl;
    }
    return 0;
}