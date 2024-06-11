#include <bits/stdc++.h>

using namespace std;

struct Student
{
    string nome;
    string cor;
    char tamanho;
};

bool CompareStudents(Student a, Student b)
{
    if(a.cor != b.cor)
        return a.cor < b.cor;

    if(a.tamanho != b.tamanho)
        return a.tamanho > b.tamanho;

    return a.nome < b.nome;
}

int main()
{
    int n, t;
    vector<Student> students;

    string nome;
    char tamanho;
    string cor;
    bool firstCase = true;

    cin>>t;
    while(t!=0)
    {
        students.clear();
        n = t;
        while(n--)
        {
            //le o nome
            do
            {
                getline(cin, nome);
            }
            while(nome.size()==0);
            cin>>cor;
            cin>>tamanho;

            Student stu;
            stu.nome = nome;
            stu.cor = cor;
            stu.tamanho = tamanho;

            students.push_back(stu);

        }

        sort(students.begin(), students.end(), CompareStudents);

        /* Imprime uma linha entre cada caso de teste! */
        if(firstCase)
        {
            firstCase = false;
        }
        else
        {
            cout<<endl;
        }

        for(int i = 0; i < students.size(); i++)
        {
            cout<<students[i].cor;
            cout<<" "<<students[i].tamanho;
            cout<<" "<<students[i].nome<<endl;
        }
        cin>>t;
    }
    return 0;
}