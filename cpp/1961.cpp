#include<bits/stdc++.h>

using namespace std;

int main()
{
    int altura, num, alturas[102];
    cin >> altura >> num;
    for (int i = 0; i < num; i++) cin >> alturas[i];
    for (int i = 1; i < num; i++)
    {
        if (abs(alturas[i]-alturas[i-1]) > altura)
        {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }
    cout << "YOU WIN" << endl;
    return 0;
}