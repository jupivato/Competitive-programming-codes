#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        n1 += n2;
        switch (n1)
        {
        case 0:
            cout << "PROXYCITY" << endl;
            break;
        case 1:
            cout << "P.Y.N.G." << endl;
            break;
        case 2:
            cout << "DNSUEY!" << endl;
            break;
        case 3:
            cout << "SERVERS" << endl;
            break;
        case 4:
            cout << "HOST!" << endl;
            break;
        case 5:
            cout << "CRIPTONIZE" << endl;
            break;
        case 6:
            cout << "OFFLINE DAY" << endl;
            break;
        case 7:
            cout << "SALT" << endl;
            break;
        case 8:
            cout << "ANSWER!" << endl;
            break;
        case 9:
            cout << "RAR?" << endl;
            break;
        case 10:
            cout << "WIFI ANTENNAS" << endl;
            break;
        }
    }
    return 0;
}