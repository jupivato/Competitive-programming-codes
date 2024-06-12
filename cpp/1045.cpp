#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<double> sides;

    for (int i = 0; i < 3; i++) {
        double side;
        cin >> side;
        sides.push_back(side);
    }

    sort(sides.begin(), sides.end(), greater<double>());

    double a = sides[0];
    double b = sides[1];
    double c = sides[2];

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (a * a == (b * b + c * c)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (a * a > (b * b + c * c)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (a * a < (b * b + c * c)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
