#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    int letra;
    int soma;
    cin>>casos;
    while(casos!=0)
    {
        while(casos--)
        {
            int resp[5];
            int a;
            soma=0;
            letra = 0;
            for (int i=0; i<5; i++)
            {
                cin>>a;
                resp[i]=a;
                if (resp[i]<=127)
                {
                    soma+=1;
                    letra = i;
                }
            }
            if (soma == 0 || soma>1)
            {
                cout<<"*"<<endl;
            }
            else
            {
                if(letra == 0)
                {
                    cout<<"A"<<endl;
                }
                else if(letra == 1)
                {
                    cout<<"B"<<endl;
                }
                else if(letra == 2)
                {
                    cout<<"C"<<endl;
                }
                else if(letra == 3)
                {
                    cout<<"D"<<endl;
                }
                else if (letra == 4)
                {
                    cout<<"E"<<endl;
                }
            }
        }
    cin>>casos;
    }
    return 0;
}