#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("C:\\Users\\julia\\input.txt", "r", stdin);
    int casos;
    cin>>casos;
    string palavra;
    while (casos--)
    {
        cin>>palavra;
        if((palavra[0]=='o' && palavra[1]=='n') || (palavra[0]=='o' && palavra[2] == 'e') || (palavra[1]=='n' && palavra[2] == 'e'))
        {
            cout<<"1"<<endl;
        }
        else if ((palavra[0]=='t' && palavra[1]=='w') || (palavra[0]=='t' && palavra[2] == 'o') || (palavra[1]=='w' && palavra[2] == 'o'))
        {
            cout<<"2"<<endl;
        }
        else if ((palavra[0]=='t' && palavra[1]=='h' && palavra[2]=='r' && palavra[3]=='e') || (palavra[0]=='t' && palavra[1] == 'h' && palavra[2]=='r' && palavra[4]=='e') || (palavra[0]=='t' && palavra[1] == 'h' && palavra[3]=='e' && palavra[4]=='e') || (palavra[0]=='t' && palavra[2] == 'r' && palavra[3]=='e' && palavra[4]=='e') || (palavra[1]=='h' && palavra[2] == 'r' && palavra[3]=='e' && palavra[4]=='e'))
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}