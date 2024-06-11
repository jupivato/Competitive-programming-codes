#include <bits/stdc++.h>

using namespace std;

int main ()
{
    char teclado[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
    string input = "";
    while(getline(cin, input))
    {
        int tam = input.length();
        for (int i = 0; i < tam; ++i)
        {
            if(input[i]==' ') cout << input[i];
            else
            {
                for(int j = 0; j < 48; ++j) if (input[i] == teclado[j]) cout << teclado[j-1];
            }
        }
        cout << endl;
    }
    return 0;
}