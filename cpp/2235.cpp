#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3;
    vector<int>anos;
    cin >> n1 >> n2 >> n3;
    anos.push_back(n1);
    anos.push_back(n2);
    anos.push_back(n3);
    sort(anos.begin(), anos.end());
    if (anos[2] == anos[1]) cout << "S" << endl;
    else if (anos[1] == anos[0]) cout << "S" << endl;
    else if (anos[2] == anos[1] + anos[0]) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}
