#include<bits/stdc++.h>

using namespace std;

int main()
{
    int pos;
    cin >> pos;
    if (pos == 1)
    {
        cout << "Top 1" << endl;
        return 0;
    }
    else if (pos <= 3)
    {
        cout << "Top 3" << endl;
        return 0;
    }
    else if (pos <= 5)
    {
        cout << "Top 5" << endl;
        return 0;
    }
    else if (pos <= 10)
    {
        cout << "Top 10" << endl;
        return 0;
    }
    else if (pos <= 25)
    {
        cout << "Top 25" << endl;
        return 0;
    }
    else if (pos <= 50)
    {
        cout << "Top 50" << endl;
        return 0;
    }
    else if (pos <= 100) cout << "Top 100" << endl;
    return 0;
}