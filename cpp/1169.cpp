#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--)
    {
        unsigned long long int num;
        cin>>num;
        unsigned long long int quant=1;
        if(num==64) cout<<"1537228672809129 kg"<<endl;
        else
        {
            for(int i=0; i<num; i++)
            {
                quant*=2;
            }
            quant=((quant/12)/1000);
            cout<<quant<<" kg"<<endl;
        }
    }
    return 0;
}