#include<bits/stdc++.h>
using namespace std;

bool procuraCountry (string country)
{
        if (country == "brasil" || country == "portugal")
        {
            cout<<"Feliz Natal!"<<endl;
            return true;
        }
        else if (country == "alemanha")
        {
            cout<<"Frohliche Weihnachten!"<<endl;
            return true;
        }
        else if (country == "austria")
        {
            cout<<"Frohe Weihnacht!"<<endl;
            return true;
        }
        else if (country == "coreia")
        {
            cout<<"Chuk Sung Tan!"<<endl;
            return true;
        }
        else if (country =="espanha" || country == "argentina" || country == "chile" || country == "mexico")
        {
            cout<<"Feliz Navidad!"<<endl;
            return true;
        }
        else if (country == "grecia")
        {
            cout<<"Kala Christougena!"<<endl;
            return true;
        }
        else if (country == "estados-unidos" || country == "inglaterra" || country == "australia" || country == "antardida" || country == "canada")
        {
            cout<<"Merry Christmas!"<<endl;
            return true;
        }
        else if (country == "suecia")
        {
            cout<<"God Jul!"<<endl;
            return true;
        }
        else if (country == "turquia")
        {
            cout<<"Mutlu Noeller"<<endl;
            return true;
        }
        else if (country =="irlanda")
        {
            cout<<"Nollaig Shona Dhuit!"<<endl;
            return true;
        }
        else if (country == "belgica")
        {
            cout<<"Zalig Kerstfeest!"<<endl;
            return true;
        }
        else if (country == "italia" || country == "libia")
        {
            cout<<"Buon Natale!"<<endl;
            return true;
        }
        else if (country == "siria" || country =="marrocos")
        {
            cout<<"Milad Mubarak!"<<endl;
            return true;
        }
        else if (country =="japao")
        {
            cout<<"Merii Kurisumasu!"<<endl;
            return true;
        }
        else
        {
            cout<<"--- NOT FOUND ---"<<endl;
            return true;
        }
}

int main()
{
    string country;
    while (cin>>country) procuraCountry(country);
    return 0;
}