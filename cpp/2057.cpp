#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hp, t, fh, h;

    cin>>hp>>t>>fh;

    h=hp+t+fh;

    if(h==24)cout<<"0"<<endl;
    else if(h>24)cout<<h-24<<endl;
    else if(h<0)cout<<24-abs(h)<<endl;
    else cout<<h<<endl;

    return 0;
}