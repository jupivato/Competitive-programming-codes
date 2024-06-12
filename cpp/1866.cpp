#include<bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    while (casos--)
    {
        int num;
        cin >> num;
        if (num % 2 == 0) cout << "0" << endl;
        else cout << "1" << endl; 
    }
    return 0;
}