#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("C:\\Users\\julia\\input.txt", "r", stdin);
    int a, b, c;
    while (cin>>a>>b>>c)
    {
        if (a == b && b == c)
        {
            cout<<"*"<<endl;
        }
        else if (a == b && b != c)
        {
            cout<<"C"<<endl;
        }
        else if (a == c && c != b)
        {
            cout<<"B"<<endl;
        }
        else if (b == c && c!= a)
        {
            cout<<"A"<<endl;
        }
    }
    return 0;
}