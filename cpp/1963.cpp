#include<bits/stdc++.h>
#define ANO 2014

using namespace std;

int main()
{
    double ini, fim, aum;
    cin >> ini >> fim;
    aum = (fim / ini) - 1;
    cout << setprecision(2) << fixed << aum *100 << "%" << endl;
}