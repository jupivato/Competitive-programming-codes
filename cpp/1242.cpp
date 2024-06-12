#include<bits/stdc++.h>

using namespace std;

int main ()
{
    string acidos;
    while(cin>>acidos)
    {
        int tam, contt = 0;
        tam = acidos.size();
        stack<char>rna;
        for (int i = 0 ; i < tam; i++)
        {
            if(rna.empty()) rna.push(acidos[i]);
            else
            {
                if(rna.top() == 'B' && acidos[i] == 'S' || rna.top() == 'S' && acidos[i] == 'B')
                {
                    rna.pop();
                    contt++;
                }
                else if (rna.top() == 'C' && acidos[i] == 'F' || rna.top() == 'F' && acidos[i] == 'C')
                {
                    rna.pop();
                    contt++;
                }
                else rna.push(acidos[i]);
            }
        }
        cout << contt << endl;
    }
    return 0;
}