#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, soma=1000, pos;
    string a;

    cin>>n;

    while (n!=0)
    {
        soma = 1000;
        cin>>a;
        for (i=0; i<n; i++)
        {
            if (a[i] == 'D')
            {
                soma=soma+1;
            }
            if (a[i] == 'E')
            {
                soma=soma-1;
            }
        }

        pos = soma % 4;

        if (pos == 0)
        {
            cout<< 'N' <<endl;
        }
        else if (pos == 1)
        {
            cout<< 'L' << endl;
        }
        else if (pos == 2)
        {
            cout<< 'S' <<endl;
        }
        else if (pos == 3)
        {
            cout<< 'O' << endl;
        }

        cin>>n;
    }
    return 0;
}