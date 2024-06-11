#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin>>casos;
    int quant, qc=0, qr=0, qs=0, total=0;
    float pc=0, pr=0, ps=0;
    char an;
    while(casos--)
    {
        cin>>quant>>an;
        total+=quant;
        if(an=='C')qc+=quant;
        else if(an=='R')qr+=quant;
        else if(an=='S')qs+=quant;
    }
    pc=(qc*100.0)/total;
    pr=(qr*100.0)/total;
    ps=(qs*100.0)/total;

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<qc<<endl;
    cout<<"Total de ratos: "<<qr<<endl;
    cout<<"Total de sapos: "<<qs<<endl;
    cout<<"Percentual de coelhos: "<<setprecision(2)<<fixed<<pc<<" %"<<endl;
    cout<<"Percentual de ratos: "<<setprecision(2)<<fixed<<pr<<" %"<<endl;
    cout<<"Percentual de sapos: "<<setprecision(2)<<fixed<<ps<<" %"<<endl;

    return 0;
}