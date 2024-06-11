#include<bits/stdc++.h>
using namespace std;

string sentence;
void converte (string sentence)
{
    bool maiuscula=true;
    int tam = sentence.size();
    for(int i=0; i<tam; i++)
    {
        int letra = sentence[i];
        if(sentence[i]==' ')printf("%c",sentence[i]);
        else if (maiuscula)
        {
            if(letra>=65 && letra<=90)printf("%c", letra);
            else printf("%c", letra-32);
            maiuscula=false;
        }
        else
        {
            if(letra>=97 && letra<=122)printf("%c", letra);
            else printf("%c", letra+32);
            maiuscula=true;
        }
    }
    cout<<endl;
}

int main()
{
    while (getline(cin, sentence)) converte(sentence);
    return 0;
}