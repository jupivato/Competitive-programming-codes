#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x1, x2, y1, y2, c1, c2, i=0, num, soma=0, teste=0;

    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;

    while (x1!=0 && y1!=0 && x2!=0 && y2!=0)
    {
        cin>>num;
        i=0;
        while (i<num)
        {
            cin>>c1;
            cin>>c2;

            if ((c1>=x1 && c1<=x2) || (c1>=x2 && c1<= x1))
            {
                //cout<<"X OK"<<endl;
                if ((c2>=y1 && c2<=y2) || (c2>=y2 && c2<=y1))
                {
                    //cout<<"Y OK"<<endl;
                    soma = soma + 1;
                }
            }
            else
            {
                //cout<<"deu nao"<<endl;
            }
            i++;
            }
        teste++;
        cout<<"Teste "<< teste << endl;
        cout << soma << endl;
        
        cin>>x1>>y1>>x2>>y2;
        soma = 0;
    }
    return 0;
}