#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num, resp = 0;
    cin >> num;
    resp += num * 300;
    cin >> num;
    resp += num * 1500;
    cin >> num;
    resp += num * 600;
    cin >> num;
    resp += num * 1000;
    cin >> num;
    resp += num * 150;
    cout << resp + 225 << endl;
    return 0;
}