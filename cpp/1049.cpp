#include<bits/stdc++.h>

using namespace std;

int main()
{
    string carac;
    cin >> carac;
    if (carac == "vertebrado")
    {
        cin >> carac;
        if (carac == "ave")
        {
            cin >> carac;
            if (carac == "carnivoro") cout << "aguia" << endl;
            else cout << "pomba" << endl;
        }
        else
        {
            cin >> carac;
            if (carac == "onivoro") cout << "homem" << endl;
            else cout << "vaca" << endl;
        }
    }
    else
    {
        cin >> carac;
        if (carac == "inseto")
        {
            cin >> carac;
            if (carac == "hematofago") cout << "pulga" << endl;
            else cout << "lagarta" << endl;
        }
        else
        {
            cin >> carac;
            if (carac == "hematofago") cout << "sanguessuga" << endl;
            else cout << "minhoca" << endl;
        }
    }
}