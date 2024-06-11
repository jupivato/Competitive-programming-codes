#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number, days;
    float vallue;
    cin>>number>>days>>vallue;
    cout<<"NUMBER = "<<number<<endl; 
    cout<<"SALARY = U$ "<<setprecision(2)<<fixed<<days*vallue<<endl;
    return 0;
}
