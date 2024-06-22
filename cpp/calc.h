#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
void soma(float num1);
void sub(float num1);
void mult(float num1);
void div(float num1);
void rzqd(float num1);
void elev(float num1);
int main(){
    setlocale(LC_ALL,"Portuguese");
    int dec;
    float numP;
    cout<<"Digita o primeiro número ai:"<<endl;
    cin>>numP;
    system("cls");
    cout<<"Escolha a operação que deseja."<<endl;
    cout<<"[1] -> Soma\n[2] -> Subtração\n[3] -> Multiplicação\n[4] -> Divisão"<<endl;
    cout<<"Operação: ";
    cin>>dec;
    system("cls");
    switch(dec){
        case 1:
            soma(numP);
            break;
        case 2:
            sub(numP);
            break;
        default:
            cout<<"ERRO";
            break;
    }
}
void soma(float num1){
    float num2;
    cout<<"Digite o segundo número\n";
    cout<<num1<<" + ";
    cin>>num2;
    cout<<num1+num2;
}
void sub(float num1){
    float num2;
    cout<<"Digite o segundo número\n";
    cout<<num1<<" - ";
    cin>>num2;
    cout<<num1-num2;
}
