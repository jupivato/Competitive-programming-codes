#include <bits/stdc++.h>
#define MAX 20

using namespace std;

int v, e;
int visitado [MAX];
int m[MAX][MAX];
bool temcaso = false;

void dfs(int s, int space)
{
    if (!visitado[s]) visitado[s]=1;
    for(int i = 0; i < v; ++i)
    {
        if(m[s][i])
        {
            temcaso = true;
            if(!visitado[i])
            {
                for (int j = 0; j < space; ++j) cout << " ";
                cout << s << "-" << i << " pathR(G," << i << ")" << endl;
                dfs(i, space+2);
            }
            else
            {
                for (int j = 0; j < space ; ++j) cout << " ";
                cout << s << "-" << i << endl;
            }
        }
    }
}

int main ()
{
    int casos, contcasos = 1;
    cin >> casos;
    while(casos--)
    {
        memset(m,0,sizeof(m));
        memset(visitado,0,sizeof(visitado));
        cin >> v >> e;
        for(int i = 0; i < e; ++i)
        {
            int aux1, aux2;
            cin >> aux1 >> aux2;
            m[aux1][aux2] = 1;
        }
        cout << "Caso " << contcasos << ":" << endl;
        for(int i = 0; i < v; ++i)
        {
            temcaso = false;
            if(!visitado[i]) dfs(i, 2);
            if (temcaso) cout << endl;
        }
        ++contcasos;
    }
    return 0;
}