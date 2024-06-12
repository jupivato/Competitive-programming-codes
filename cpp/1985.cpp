#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    float resp = 0;
    cin >> num;
    while (num--)
    {
        int aux, quant;
        cin >> aux >> quant;
        switch (aux)
        {
            case 1001:
                resp += 1.50 * quant;
                break;
            case 1002:
                resp += 2.50 * quant;
                break;
            case 1003:
                resp += 3.50 * quant;
                break;
            case 1004:
                resp += 4.50 * quant;
                break;
            case 1005:
                resp += 5.50 * quant;
                break;
        }
    }
    cout << setprecision(2) << fixed << resp << endl;
    return 0;
}