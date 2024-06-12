#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a ="", b = "", c = "";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    int tama = a.length();
    int tamb = b.length();
    int tamc = c.length();

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;

    if(tama > 10) 
        for (int i = 0; i < 10; i++) cout << a[i];
    else cout << a;
    if (tamb > 10)
        for (int i = 0; i < 10; i++) cout << b[i];
    else cout << b;
    if (tamc > 10)
        for (int i = 0; i < 10; i++) cout << c[i];
    else cout << c;

    cout << endl;
    return 0;
}