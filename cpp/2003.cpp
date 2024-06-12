#include<bits/stdc++.h>
#define ANO 2014

using namespace std;

int main()
{
    int hora, minuto, maximo;
    char ponto;
    while(scanf("%d%c%d", &hora, &ponto, &minuto)!=EOF)
    {
        if (hora < 7) maximo = 0;
        else if (hora == 7) maximo = 60- (60 - minuto);
        else if (hora == 8) maximo = 60 + minuto;
        else if (hora == 9) maximo = 120;
        cout << "Atraso maximo: " << maximo << endl;
    }

}