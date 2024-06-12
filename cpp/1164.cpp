#include <bits/stdc++.h>
#define MAX 12

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    while(casos--)
    {
        int num, soma = 0;
        cin >> num;
        for (int i = 1; i <= num / 2; i++) 
            if (num % i == 0) soma += i;
        if (soma == num) cout << num << " eh perfeito" << endl;
        else cout << num << " nao eh perfeito" << endl;
    }
    return 0;
}