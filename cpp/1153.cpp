#include<bits/stdc++.h>

using namespace std;

int fatorial (int num)
{
    if (num == 1 || num == 0) return 1;
    else return num * fatorial(num - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << fatorial(num) << endl;
    return 0;
}