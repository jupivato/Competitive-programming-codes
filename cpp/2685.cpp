#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int grau;
    while (cin >> grau)
    {
        if (grau == 360 || grau >= 0 && grau < 90) cout << "Bom Dia!!" << endl;
        else if (grau >= 90 && grau < 180) cout << "Boa Tarde!!" << endl;
        else if (grau >= 180 && grau < 270) cout << "Boa Noite!!" << endl;
        else cout << "De Madrugada!!" << endl;
    }

return 0;
}