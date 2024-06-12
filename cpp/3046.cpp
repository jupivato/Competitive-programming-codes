#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num, resp = 0;
    cin >> num;
    for (int i = num + 1; i >= 1; i--) resp += i;
    cout << resp << endl;
    return 0;
}