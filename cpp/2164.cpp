#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    double fibo;
    fibo = ((pow(((1+sqrt(5))/2), num) - pow(((1-sqrt(5))/2),num)))/sqrt(5);
    cout << setprecision(1) << fixed << fibo << endl;
    return 0;
}