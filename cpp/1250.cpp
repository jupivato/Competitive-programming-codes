#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int casos, disp, soma, alt[51];
    string sj;

    cin>>casos;

    while(casos--)
    {
        soma=0;
        cin>>disp;

        for(int i=0; i<disp; i++)
        {
            cin>>alt[i];
        }

        cin>>sj;

        for (int i=0; i<disp; i++)
        {
            if(alt[i]<=2 && sj[i]=='S')
            {
                soma += 1;
            }
            else if(alt[i]>=3 && sj[i]=='J')
            {
                soma += 1;
            }
        }

        cout<<soma<<endl;

    }
   return 0;
}
