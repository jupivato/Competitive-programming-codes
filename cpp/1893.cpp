#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n1, n2, n;

    cin>>n1>>n2;

    if (n2>=0 && n2<=2) cout<<"nova"<<endl;
    
    if (n2>=97 && n2<= 100) cout<<"cheia"<<endl;
    
    if (n1<n2)//lua crescendo
        if (n2>=3 && n2<=96) cout<<"crescente"<<endl;
    
    else if (n1>n2)//lua diminuindo
        if(n2>=3 && n2<=96) cout<<"minguante"<<endl;
    return 0;
}