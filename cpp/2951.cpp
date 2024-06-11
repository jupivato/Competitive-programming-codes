#include<bits/stdc++.h>
using namespace std;

typedef struct 
{
    char runa;
    int poder;
}info;

int main()
{
    int runas, amiz, soma=0;
    cin>>runas>>amiz;
    info data[runas];
    for(int i=0; i<runas; i++)
    {
        char a;
        int b;
        cin>>a>>b;
        data[i].runa=a;
        data[i].poder=b;
    }
    
    int quant;
    cin>>quant;
    
    char ataque[quant];
    for(int i=0; i<quant; i++)
    {
        char x;
        cin>>x;
        ataque[i]=x;
    }

    for(int i=0; i<quant; i++)
    {
        for(int j=0; j<runas; j++)
        {
            if(data[j].runa==ataque[i])soma+=data[j].poder;
        }
    }

    if(soma<amiz)cout<<soma<<endl<<"My precioooous"<<endl;
    else cout<<soma<<endl<<"You shall pass!"<<endl;
    return 0;
}