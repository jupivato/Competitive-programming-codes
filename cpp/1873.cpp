#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("C:\\Users\\julia\\input.txt", "r", stdin);
    int casos;
    string r, s;
    cin>>casos;
    while(casos--)
    {
        cin>>r;
        cin>>s;
        if(r==s)
        {
            cout<<"empate"<<endl;
        }
        else if(r=="pedra")
        {
            if(s == "papel")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s == "tesoura")
            {  
                cout<<"rajesh"<<endl;
            }
            else if(s == "lagarto")
            {
                cout<<"rajesh"<<endl;
            }
            else if (s == "spock")
            {
                cout<<"sheldon"<<endl;
            }
        }
        else if(r=="papel")
        {
            if(s == "pedra")
            {
                cout<<"rajesh"<<endl;
            }
            else if(s == "tesoura")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s == "lagarto")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s == "spock")
            {
                cout<<"rajesh"<<endl;
            }
        }
        else if(r=="tesoura")
        {
            if(s == "pedra")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s == "papel")
            {
                cout<<"rajesh"<<endl;
            }
            else if(s == "lagarto")
            {
                cout<<"rajesh"<<endl;
            }
            else if(s == "spock")
            {
                cout<<"sheldon"<<endl;
            }
        }
        else if (r == "lagarto")
        {
            if(s == "pedra")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s == "papel")
            {
                cout<<"rajesh"<<endl;
            }
            else if(s == "tesoura")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s == "spock")
            {
                cout<<"rajesh"<<endl;
            }
        }
        else if(r == "spock")
        {
            if(s=="pedra")
            {
                cout<<"rajesh"<<endl;
            }
            else if(s=="papel")
            {
                cout<<"sheldon"<<endl;
            }
            else if(s=="tesoura")
            {
                cout<<"rajesh"<<endl;
            }
            else if(s=="lagarto")
            {
                cout<<"sheldon"<<endl;
            }
        }
    }
    return 0;
}