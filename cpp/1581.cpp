#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int k;
        cin>>k;
        string lg[101];
        for(int i = 0; i < k; i++){
            cin>>lg[i];
        }

        bool nativo = true;
        for(int i = 1; i < k; i++){
            if(lg[i] != lg[i-1]){
                nativo = false;
                break;
            }
        }

        if(nativo) cout<<lg[0]<<endl;
        else cout<<"ingles"<<endl;

    }
    return 0;
}