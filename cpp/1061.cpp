#include <iostream>
#include <string>

using namespace std;

int main() {
    int d1, d2, h1, h2, m1, m2, s1, s2, inicio, fim, total, td, th, tm, ts;
    string dia1, dia2, ponto1, ponto2;

    cin >> dia1 >> d1;
    cin >> h1 >> ponto1 >> m1 >> ponto2 >> s1;
    cin >> dia2 >> d2;
    cin >> h2 >> ponto1 >> m2 >> ponto2 >> s2;

    inicio = (d1 * 86400) + (h1 * 3600) + (m1 * 60) + s1;
    fim = (d2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;

    total = fim - inicio;
    td = total / 86400;
    total = total % 86400;
    th = total / 3600;
    total = total % 3600;
    tm = total / 60;
    ts = total % 60;

    cout << td << " dia(s)" << endl;
    cout << th << " hora(s)" << endl;
    cout << tm << " minuto(s)" << endl;
    cout << ts << " segundo(s)" << endl;

    return 0;
}
