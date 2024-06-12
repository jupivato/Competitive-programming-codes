#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main()
{
    double a, b, c, d, media;
    cin >> a >> b >> c >> d;
    media = (a* 2 + b * 3 + c * 4 + d) / 10;
    cout << "Media: " << setprecision(1) << fixed << media << endl;
    if (media < 5.0) cout << "Aluno reprovado." << endl;
    else if (media >= 5 && media < 7)
    {
        cout << "Aluno em exame." << endl;
        double ex, nf;
        cin >> ex;
        cout << "Nota do exame: " << ex << endl;
        nf = (media + ex) / 2;
        if (nf < 5) cout << "Aluno reprovado." << endl;
        else cout << "Aluno aprovado." << endl;
        cout << "Media final: " << setprecision(1) << fixed << nf << endl;
    }
    else cout << "Aluno aprovado." << endl;
    return 0;
}