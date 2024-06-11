#include<bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    int anos, meses, dias;
    cin>>days;
    anos = days/365;
    meses = (days - (anos*365))/30;
    dias = days-((anos*365)+(meses*30));
    cout<<anos<<" ano(s)"<<endl;
    cout<<meses<<" mes(es)"<<endl;
    cout<<dias<<" dia(s)"<<endl;
    return 0;
}
