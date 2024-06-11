#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n1, n2;
    int tam1, cont=0;
    cin>>n1;
    while(n1!="0")
    {
        bool deucerto = false;
        cin>>n2;
        int pos = n2.find(n1);
        if(pos != string::npos) deucerto = true;

        cont++;
        cout<<"Instancia "<<cont<<endl;
        if(deucerto)cout<<"verdadeira"<<endl;
        else cout<<"falsa"<<endl;
        
        cin>>n1;
        if(n1!="0")cout<<endl;
        else break;
    }
    return 0;
}
