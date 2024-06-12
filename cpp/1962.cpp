#include<bits/stdc++.h>
#define ANO 2014

using namespace std;

int main()
{
    int quant;
    cin >> quant;
    while (quant--)
    {
        int year, time;
        cin >> year;
        if (year > ANO) 
        {
            time = year - ANO;
            cout << time << " A.C." << endl;
        }
        else 
        {
            time = ANO - year + 1;
            cout << time << " D.C." << endl;
        }
    }
}