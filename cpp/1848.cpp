#include<bits/stdc++.h>

using namespace std;

int main()
{
    string corvo;
    int cont = 0;
    int soma = 0;
    while (cont < 3)
    {
        do
        {
            getline(cin, corvo);
        } while (corvo.length() == 0);
        
        if (corvo == "caw caw") 
        {
            cout << soma << endl;
            cont++;
            soma = 0;
        }

        else
        {
            if (corvo == "---") soma += 0;
            else if (corvo == "--*") soma += 1;
            else if (corvo == "-*-") soma += 2;
            else if (corvo == "-**") soma += 3;
            else if (corvo == "*--") soma += 4;
            else if (corvo == "*-*") soma += 5;
            else if (corvo == "**-") soma += 6;
            else if (corvo == "***") soma += 7;
        }
    }
    return 0;
}
