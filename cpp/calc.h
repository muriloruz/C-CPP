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
    cout<<"Digita o primeiro n�mero ai:"<<endl;
    cin>>numP;
    system("cls");
    cout<<"Escolha a opera��o que deseja."<<endl;
    cout<<"[1] -> Soma\n[2] -> Subtra��o\n[3] -> Multiplica��o\n[4] -> Divis�o"<<endl;
    cout<<"Opera��o: ";
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
    cout<<"Digite o segundo n�mero\n";
    cout<<num1<<" + ";
    cin>>num2;
    cout<<num1+num2;
}
void sub(float num1){
    float num2;
    cout<<"Digite o segundo n�mero\n";
    cout<<num1<<" - ";
    cin>>num2;
    cout<<num1-num2;
}
