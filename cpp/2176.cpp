#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

int main()
{
    string numero;
    cin >> numero;
    int num[numero.size()], soma = 0;
    for(int i = 0; i < numero.size(); i++) num[i] = numero[i] - 48;
    for(int i = 0; i < numero.size(); i++) soma += num[i];
    if (soma % 2 == 0) numero += "0";
    else numero += "1";
    cout << numero << endl;
}
