#include <iostream>
#include <locale.h>
using namespace std;
void exempUm(int a){
    int *ptr;
    ptr = &a;
    cout<<"O endere�o da vari�vel 'ptr' �: "<<ptr<<endl;
    cout<<"O valor da vari�vel 'a' �: "<<*ptr<<endl;
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
    cout<<"Digite um n�mero:"<<endl;
    cout<<"---> ";
    cin>>o;
    exempUm(o);
    cout<<"O tamanho do ponterio � "<<exempSize(o)<<" bytes";
}
