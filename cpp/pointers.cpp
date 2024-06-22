#include <iostream>
#include <locale.h>
using namespace std;
void exempUm(int a){
    int *ptr;
    ptr = &a;
    cout<<"O endereço da variável 'ptr' é: "<<ptr<<endl;
    cout<<"O valor da variável 'a' é: "<<*ptr<<endl;
}
int exempSize(int a){
    int *newprt;
    newprt = &a;
    int i = sizeof newprt;
    return i;
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int o;
    cout<<"Digite um número:"<<endl;
    cout<<"---> ";
    cin>>o;
    exempUm(o);
    cout<<"O tamanho do ponterio é "<<exempSize(o)<<" bytes";
}
