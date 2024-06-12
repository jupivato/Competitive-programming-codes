#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int casos;
    cin >> casos;
    while (casos--)
    {
        int bonus, ad, dd, ld, ag, dg, lg;
        cin >> bonus >> ad >> dd >> ld >> ag >> dg >> lg;
        double dabriel, guarte;
        dabriel = (ad + dd) / 2;
        guarte = (ag + dg) / 2;
        if (ld % 2 == 0) dabriel += bonus;
        if (lg % 2 == 0) guarte += bonus;
        if (dabriel > guarte) cout << "Dabriel" << endl;
        else if (dabriel < guarte) cout << "Guarte" << endl;
        else cout << "Empate" << endl;
    }
    return 0;
}