#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ci, vi, i;

    cin>> n;

    while (n!=0)
    {
        int num=0;
        for (i=0; i<n; i++)
        {
            cin >> ci;
            cin >> vi;

            num = num + vi/2;
        }
    cout << num/2 << endl;
    cin>>n;
    }

    return 0;
}