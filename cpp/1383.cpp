#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("C:\\Users\\julia\\input.txt", "r", stdin);

    int n, mat[9][9], i=0, j=0, k=0, u=0, v=0, l=0, soma;
    bool deucerto;

    cin>> n;

    while (l<n)
    {
        //realiza leitura do sudoku
        for (i=0; i<9; i++)
        {
            for (j=0; j<9; j++)
            {
                cin>> mat[i][j];
            }
        }
        deucerto = true;
        //realiza comparação das LINHAS
        for (i=0; i<9; i++)
        {
            soma = 0;
            bool comp[10];
            memset (comp, false, sizeof(comp));
            for (j=0; j<9; j++)
            {
                soma=soma+mat[i][j];
                if (comp[mat[i][j]])
                {
                    deucerto=false;
                    break;
                }
                else
                {
                    comp[mat[i][j]]=true;
                }

            }
            if (soma != 45)
            {
                deucerto = false;
            }
        }

        //realiza compara��o das COLUNAS
        for (i=0; i<9; i++)
        {
            soma = 0;
            bool comp[10];
            memset (comp, false, sizeof(comp));
            for (j=0; j<9; j++)
            {
                soma=soma+mat[j][i];
                if (comp[mat[j][i]])
                {
                    deucerto=false;
                    break;
                }
                else
                {
                    comp[mat[j][i]]=true;
                }
            }
            if (soma != 45)
            {
                deucerto = false;
            }
        }

        //realiza compara��o dos QUADRANTES
        u = 0;
        v = 0;

        for (k=0; k<9; k++)
        {
            soma = 0;
            bool comp[10];
            memset (comp, false, sizeof(comp));
            for (i=0+u; i<3+u; i++)
            {
                for (j=0+v; j<3+v; j++)
                {
                    soma=soma+mat[i][j];
                    if (comp[mat[i][j]])
                    {
                        deucerto=false;
                        break;
                    }
                    else
                    {
                        comp[mat[i][j]]=true;
                    }
                }
            }
            if (v<6)
                {
                    v+=3;
                }
                else
                {
                    v = 0;
                    u += 3;
                }
            if (soma != 45)
            {
                deucerto = false;
            }
        }

        //printa resultado
        l++;
        if (deucerto)
        {
            cout<<"Instancia "<< l << endl;
            cout<<"SIM"<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"Instancia "<< l << endl;
            cout<<"NAO"<<endl;
            cout<<endl;
        }
    }

        return 0;
}
