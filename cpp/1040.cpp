#include<bits/stdc++.h>
using namespace std;

int main()
{
    int casos;
    bool efila = true;
    bool epilha = true;
    bool eprioritaria = true;

    while(cin>>casos)
    {
        queue<int>fila;
        stack<int>pilha;
        priority_queue<int>filaprioritaria;
        efila = true;
        epilha = true;
        eprioritaria = true;
        while(casos--)
        {
            int option, num;
            cin>>option>>num;
            switch (option)
            {
                case 1:
                    if(efila) fila.push(num);
                    if(epilha) pilha.push(num);
                    if(eprioritaria) filaprioritaria.push(num);
                    break;
                case 2:
                    if(efila)
                    {
                        if(fila.empty()||fila.front()!=num) efila = false;
                        else fila.pop();
                    }
                    if(epilha)
                    {
                        if(pilha.empty() || pilha.top()!=num) epilha = false;
                        else pilha.pop();
                    }
                    if(eprioritaria)
                    {
                        if(filaprioritaria.empty() || filaprioritaria.top()!=num) eprioritaria = false;
                        else filaprioritaria.pop();
                    }
                    break;
            }
        }

        if(efila && !epilha && !eprioritaria) cout<<"queue"<<endl;
        else if(!efila && epilha && !eprioritaria) cout<<"stack"<<endl;
        else if (!efila && !epilha && eprioritaria ) cout<<"priority queue"<<endl;
        else if(!efila && !epilha && !eprioritaria) cout<<"impossible"<<endl;
        else cout<<"not sure"<<endl;
    }

    return 0;
}