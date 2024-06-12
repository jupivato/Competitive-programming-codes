#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, mediana, i, idades[100], m, num, j=1;

    cin>>num;//scan numero de testes

    while(j<=num)//looping do numero de testes 
    {
        cin>>n;// numero de pessoas no time
        
        mediana=(n/2);//como é int seria ex: n=7 mediana = 7 - (7/2), 7/2 seria 3 pois 0,5 é parte float, portanto mediana = 7 - 3 = 4. 

        for (i=0; i<n; i++)//looping com o numero de participantes para armazenar no vetor 
        {
            cin>>m;// le a idade do participante
            idades[i]=m;//adiciona essa idade em uma posição do vetor 
        }

        cout<<"Case "<< j << ": "<< idades[mediana]<<endl;//printa a idade do capitão
        j++;//adiciona o j para voltar e realizar o looping novamente
    }    

    return 0;
}