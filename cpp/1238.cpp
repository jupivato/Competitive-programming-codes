#include<bits/stdc++.h>
using namespace std;

void combine (string str1, string str2)
{
    int tam1=str1.size();
    int tam2=str2.size();
    int maior;
    string aux;
    if(tam1>tam2) maior=tam1;
    else  maior = tam2;
    int i=0;
    while(maior--)
    {
        if(i<tam1)cout<<str1[i];
        if(i<tam2)cout<<str2[i];
        i++;
    }
    cout<<endl;
}

int main()
{
    int casos;
    cin>>casos;
    while(casos--)
    {
        string str1, str2;
        cin>>str1>>str2;
        combine(str1,str2);
    }
    return 0;
}