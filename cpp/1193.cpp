#include<bits/stdc++.h>

using namespace std;

int r[50];
int cont = 0;
unsigned long long int num = 0;


void decTohexa(unsigned long long int a)
{
        cont=0;
        while(a>=16)
        {
            r[cont] = a%16;
            cont++;
            a /= 16;
        }
        r[cont]=a%16;
}
void decToBinary(unsigned long long int a)
{
        cont=0;
        while(a >= 2)
        {
            r[cont] = a%2;
            cont++;
            a /= 2;
        }
        r[cont] = a%2;
}
void binaryToDec(char *a)
{
    num=0;
    int tam = strlen(a);
    int b2 = 1;
    for(int i = 1; i < tam ; i++) b2*=2;
    for(int i = 0; a[i] != '\0'; i++)
    {
        int number = a[i]-48;
        num+=(number*b2);
        b2/=2;
    }
}


void hexaToDec(char *a)
{
    num=0;
    int b16=1;
    int tam = strlen(a);
    for(int i=1;i<tam;i++) b16*=16;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='A')
        {
            num += (10*b16);
            b16/=16;
        }
        else if(a[i]=='B')
        {
            num+=(11*b16);
            b16/=16;
        }
        else if(a[i]=='C')
        {
            num+=(12*b16);
            b16/=16;
        }
        else if(a[i]=='D')
        {
            num+=(13*b16);
            b16/=16;
        }
        else if(a[i]=='E')
        {
            num+=(14*b16);
            b16/=16;
        }
        else if(a[i]=='F')
        {
            num+=(15*b16);
            b16/=16;
        }
        else
        {
            int number = a[i]-48;
            num+=(number*b16);
            b16/=16;
        }
    }
}

int main()
{
    char a[50],tipo[4];
    int n;
    map<int,char> hexa;
    hexa[0]='0';
    hexa[1]='1';
    hexa[2]='2';
    hexa[3]='3';
    hexa[4]='4';
    hexa[5]='5';
    hexa[6]='6';
    hexa[7]='7';
    hexa[8]='8';
    hexa[9]='9';
    hexa[10]='a';
    hexa[11]='b';
    hexa[12]='c';
    hexa[13]='d';
    hexa[14]='e';
    hexa[15]='f';
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> tipo;

        if(tipo == "hex")
        {
            cout << "Case " << i+1 << ":" << endl;
            int tam = strlen(a);
            char c[50];
            int j=0;
            for(int i=0; i<=tam; i++)
            {
                c[j]=toupper(a[i]);
                j++;
            }
            c[j]='\0';
            hexaToDec(c);
            cout << num << " dec"<< endl;
            decToBinary(num);
            for(int i = cont; i >= 0; i--) cout << r[i];
            cout << " bin" << endl;
        }

        else if(tipo == "bin")
        {
            map<int,char>::iterator it;
            cout<<"Case "<<i+1<<":"<<endl;
            binaryToDec(a);
            cout<<num<<" dec"<<endl;
            decTohexa(num);
            for(int i = cont; i >= 0; i--)
            {
                it=hexa.find(r[i]);
                cout<<it->second;
            }
            cout<<" hex"<<endl;
        }


        else if(tipo == "dec")
        {
            cout<<"Case "<<i+1<<":"<<endl;
            unsigned long long int aux = atoi(a);
            map<int,char>::iterator it;
            decTohexa(aux);
            for(int i = cont; i >= 0; i--)
            {
                it=hexa.find(r[i]);
                cout<<it->second;
            }
            cout<<" hex"<<endl;
            cont=0;
            decToBinary(aux);
            for(int i=cont;i>=0;i--) cout<<r[i];
            cout<<" bin"<<endl;
        }
        cout << endl;
    }
return 0;
}