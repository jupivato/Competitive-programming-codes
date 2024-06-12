#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int num;
    float s = 0, sc = 0, b = 0, bc = 0, a = 0, ac = 0;
    cin >> num;
    while (num--)
    {
        string nome;
        float sq, bl, at, sr, br, ar;
        cin >> nome >> sq >> bl >> at >> sr >> br >> ar;
        s += sq;
        sc += sr;
        b += bl;
        bc += br;
        a += at;
        ac += ar;
    }
    float saque, bloqueio, ataque;
    saque = (sc / s) * 100;
    bloqueio = (bc / b) * 100;
    ataque = (ac / a) * 100;
    cout << "Pontos de Saque: " << setprecision(2) << fixed << saque << " %." << endl;
    cout << "Pontos de Bloqueio: " << setprecision(2) << fixed << bloqueio << " %." << endl;
    cout << "Pontos de Ataque: " << setprecision(2) << fixed << ataque << " %." << endl;
    return 0;
}