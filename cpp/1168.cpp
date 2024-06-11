#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string num;
    int n, soma=0, i, casos, j=0, tam=0;

    cin>>casos;

    while(j<casos)
    {
        soma = 0;
        cin>>num;
        tam=num.size();

        for (i=0; i<tam; i++)
        {
            int n=num[i]-48;
            if (n==1) soma=soma+2;
            else if (n==2 || n==5 || n==3) soma=soma+5;
            else if (n==4) soma=soma+4;
            else if (n==6 || n==9 || n==0) soma=soma+6;
            else if (n==8) soma=soma+7;
            else if (n==7) soma=soma+3;
        }

        cout<<soma<<" leds"<<endl;
        j++;
    }
    return 0;
}