#include <iostream>
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,tamanho,i,cont=0;
    cout<<"Quantas letras ser�o digitads?"<<endl;
    cout<<"---> ";
    cin>>n;
    char a[n];
    tamanho=sizeof(a)/sizeof(a[0]);
    system("cls");
    for(i=0;i<tamanho;i++){
        cout<<"Entre com uma �nica letra"<<endl;
        cout<<"---> ";
        cin>>a[i];
    }
    for(i=0;i<tamanho;i++)
        if(a[i]=='A' or a[i]=='a') cont++;
    if(cont==1){
        system("cls");
        system("color 0c");
        cout<<"Existe um total de 1 'A'";
    }
    else if(cont>=2){
        system("cls");
        system("color 0c");
        cout<<"Existem um total de "<<cont<<" 'A's";
    }
    else{
        system("cls");
        system("color 0c");
        cout<<"Existe um total de 0 'A's";
    }
}
