#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, num, j=0;

    cin>>num;

    while(j<num)
    {

        cin>>n;
        bool deucerto=true;

        if (n == 1)
        {
            cout<< n << " nao eh primo" <<endl;
        }
        else if (n==2)
        {
            cout << n << " eh primo" <<endl;
        }
        else if (n%2 == 0)
        {
            cout<< n << " nao eh primo" <<endl;
        }
        else
        {
            for (i=2; i<n/2; i++)
            {
                if (n%i==0)
                {
                    deucerto=false;
                }
            }

            if (deucerto)
            {
                cout<< n << " eh primo" <<endl;
            }
            else
            {
                cout<< n << " nao eh primo" <<endl;
            }
        }
        j++;
    }
        
    return 0;
}