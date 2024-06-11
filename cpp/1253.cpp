#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--)
    {
        string palavra;
        string decod;
        int desl;

        cin>>palavra;
        cin>>desl;

        int tam = palavra.size();

        for(int i=0; i<tam; i++)
        {            
            if(((int)palavra[i]-desl)<65)
            {
                int aux = desl - ((int)palavra[i] - 64);
                decod += 90 - aux;
            }
            else{
            decod += (int)palavra[i] - desl;
            }
        }

        cout<<decod<<endl;

    }
    return 0;
}