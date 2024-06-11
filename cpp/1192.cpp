#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    scanf("%d", &casos);
    while(casos--)
    {
        int n1, n2, res;
        char num[4], op;
        scanf("%s",num);

        n1=num[0]-48;
        op=num[1];
        n2=num[2]-48;

        if(n1==n2) res=n1*n2;
        else if(op>=65 && op<=90) res=n2-n1;
        else if(op>=97 && op <=122) res=n1+n2;
        printf("%d\n", res);
    }
    return 0;
}