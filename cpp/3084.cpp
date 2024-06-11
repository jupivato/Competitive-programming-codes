#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gh, gm, h, m;
    while(cin>>gh>>gm)
    {
        h=gh/30;
        m=gm/6;
        if(h<10 && m<10) cout<<"0"<<h<<":0"<<m<<endl;
        else if(h<10 && m>=10) cout<<"0"<<h<<":"<<m<<endl;
        else if(h>=10 && m<10) cout<<h<<":0"<<m<<endl;
        else if(h>=10 && m>=10) cout<<h<<":"<<m<<endl;
    }
    return 0;
}