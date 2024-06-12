#include<bits/stdc++.h>

using namespace std;

int main() { 
    int contjipe = 0, contpessoa = 0, quant;
    string action;
    while (1) 
    {   
        cin >> action;
        if (action == "ABEND") break;
        cin >> quant;
        if (action == "SALIDA") 
        {
            contjipe++;
            contpessoa += quant;
        }
        else if (action == "VUELTA") 
        {
            contjipe--;
            contpessoa -= quant;
        }
    }
    cout << contpessoa << endl << contjipe << endl;
    return 0;
}
