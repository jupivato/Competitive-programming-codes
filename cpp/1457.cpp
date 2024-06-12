#include<bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long int f;
    int a, b, num, teste, i;
    char exc[21]; 
    cin>>teste;
    while(teste--)
    {  
        scanf("%d%s", &num, exc);
        a=num;
        b=strlen(exc);
        i=1;
        f=a;
        while(i*b<a)
        {
            f*=(a-i*b);
            i++;
        }
        cout<<f<<endl;
    }
   return 0;
}
