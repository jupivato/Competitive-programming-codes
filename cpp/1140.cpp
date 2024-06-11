#include<bits/stdc++.h>

using namespace std;

int main ()
{
    string sentence = "";
    getline(cin,sentence);
    while(sentence != "*")
    {
        bool tauto = true;
        int tam = sentence.length();
        char primmai, primmin;
        if(sentence[0]>=97 && sentence[0] <=122)
        {
            primmin = sentence[0];
            primmai = sentence[0]-32;
        }
        else if(sentence[0]>=65 && sentence[0] <=90)
        {
            primmin = sentence[0];
            primmai = sentence[0]+32;
        }
        //cout << primmin << endl << primmai << endl;
        for(int i = 0 ; i < tam; i++)
        {
            if(sentence[i-1] == ' ')
            {
                if(sentence[i] != primmin && sentence[i] !=primmai) tauto = false;
            }
        }
        if(tauto) cout << "Y" << endl;
        else cout << "N" << endl;

        sentence = "";
        getline(cin,sentence);
        
    }
    return 0;
}