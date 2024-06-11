#include<bits/stdc++.h>
using namespace std;

int main()
{
	int casos;
	cin>>casos;
	while(casos--)
	{
		string areia;
		cin>>areia;
		int quant=0;
		int tam = areia.size();
        stack<char>pilha;
		for (int i=0; i<tam; i++)
		{
			if(areia[i]=='<') pilha.push(areia[i]);
            else if (areia[i]=='>')
            {
                if(!pilha.empty())
                {
                    pilha.pop();
                    quant++;
                }
		    }
        }
		cout<<quant<<endl;
	}
	return 0;
}