#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    float soma,media;
    vector<float> notasAlunos(4);
    vector<string> alunosNome(5);
    int i,j,k,l;
    for(i=0;i<5;i++){
        cout<<"Qual o nome do aluno?\n---> ";
        getline(cin>>ws, alunosNome[i]);
        if(alunosNome[i]=="6") break;
        system("cls");
        for(j=0;j<4;j++){
            k=1+j;
            cout<<"Qual é a "<<k<<"º nota deste aluno\n---> ";
            cin>>notasAlunos[j];
            soma=soma+notasAlunos[j];
        }
        system("cls");
        media=soma/4;
        cout<<"O aluno "<<alunosNome[i]<<" etá com nota de "<<media<<endl;
    }
    for(l=0;l<alunosNome.size();l++){
        cout<<"O aluno "<<alunosNome[i]<<" etá com nota de "<<media<<endl;
    }
}

