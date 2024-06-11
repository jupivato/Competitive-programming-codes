#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos, n;
    vector<int>v;
    cin>>casos;
    int num;
     for (int i=0; i<casos; i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort (v.begin(), v.end());
    n = v[0];
    int i = 1;
    int soma=1;
    while(i<casos+1)
    {
        if(v[i]==n)
        {
            soma++;
            i++;
        }
        else
        {
            cout<<n<<" aparece "<<soma<<" vez(es)"<<endl;
            n=v[i];
            soma=0;
        }
    }

    return 0;
}