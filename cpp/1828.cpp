#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("C:\\Users\\julia\\input.txt", "r", stdin);
    int casos, cont = 1;
    string r, s;
    cin >> casos;
    while(cont <= casos)
    {
        cin>> s >> r;
        cout << "Caso #" << cont << ": ";
        if(r==s) cout<<"De novo!"<<endl;
        else if(r=="pedra")
        {
            if(s == "papel") cout<<"Bazinga!"<<endl;
            else if(s == "tesoura") cout<<"Raj trapaceou!"<<endl;
            else if(s == "lagarto") cout<<"Raj trapaceou!"<<endl;
            else if (s == "Spock") cout<<"Bazinga!"<<endl;
        }
        else if(r=="papel")
        {
            if(s == "pedra") cout<<"Raj trapaceou!"<<endl;
            else if(s == "tesoura") cout<<"Bazinga!"<<endl;
            else if(s == "lagarto") cout<<"Bazinga!"<<endl;
            else if(s == "Spock") cout<<"Raj trapaceou!"<<endl;
        }
        else if(r=="tesoura")
        {
            if(s == "pedra") cout<<"Bazinga!"<<endl;
            else if(s == "papel") cout<<"Raj trapaceou!"<<endl;
            else if(s == "lagarto") cout<<"Raj trapaceou!"<<endl;
            else if(s == "Spock") cout<<"Bazinga!"<<endl;
        }
        else if (r == "lagarto")
        {
            if(s == "pedra") cout<<"Bazinga!"<<endl;
            else if(s == "papel") cout<<"Raj trapaceou!"<<endl;
            else if(s == "tesoura") cout<<"Bazinga!"<<endl;
            else if(s == "Spock") cout<<"Raj trapaceou!"<<endl;
        }
        else if(r == "Spock")
        {
            if(s=="pedra") cout<<"Raj trapaceou!"<<endl;
            else if(s=="papel") cout<<"Bazinga!"<<endl;
            else if(s=="tesoura") cout<<"Raj trapaceou!"<<endl;
            else if(s=="lagarto") cout<<"Bazinga!"<<endl;
        }
        cont++;
    }
    return 0;
}