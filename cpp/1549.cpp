#include<bits/stdc++.h>
#define PI 3.1415926535897932384626433832795
using namespace std;

int main ()
{
    int casos;
    double num, ml, b, B, h;

    cin>>casos;

    while(casos--)
    {
        cin>> num>> ml>> b>> B>> h;
        double newv=ml/num;
        //cout<<newv<<endl;
        double B2=pow(newv * 3 * (B - b) / (PI * h) + b * b * b, 1.0 / 3.0);
        double newh = newv * 3.0 / (PI * (B2 * B2 + B2 * b + b * b));
        cout<< setprecision(2)<< fixed<< newh<< endl;
    }
    return 0;
}