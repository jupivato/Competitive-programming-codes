#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ab, ac;
    cin >> ab >> ac;
    while(ac--)
    {
        string aux = "";
        cin >> aux;
        if (aux == "fechou") ab+=1;
        else if (aux == "clicou") ab-=1;
    }
    cout << ab << endl;
    return 0;
}