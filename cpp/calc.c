/*
    Nome: Calc.cpp
    Author: Murilo
    Date: 23/10/2023 20:27
    Version: B01:26/10/2023 17:48 -> Terminei as 5 primeiras fun��es e a fun��o fatorar. Agora falta criar/terminar a fun��o
    raiz quadrada.
    elevar e a fun��o fatorar.
    Description: Uma calaculadora
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <math.h>

double somar(double,double);
double subtrair(double,double);
double multiplicar(double,double);
double dividir(double,double);
double elevar(double,double);
double fatorar(double);
double calcularRaiz(double, double);
void contagem(int);
void escrever(char[]);
void voltar(char[]);

main(){
    setlocale(LC_ALL,"Portuguese");
    int op,fat;
    double num1,num2;
    op=fat=num1=num2=0;
    escrever("mn");
    puts("");
    puts("\t\t\t\t\t[1] -> Aperte para \"Soma\".");
    puts("\t\t\t\t\t[2] -> Aperte para \"Subtra��o\".");
    puts("\t\t\t\t\t[3] -> Aperte para \"Multiplica��o\".");
    puts("\t\t\t\t\t[4] -> Aperte para \"Divis�o\".");
    puts("\t\t\t\t\t[5] -> Aperte para \"Exponencia��o\".");
    puts("\t\t\t\t\t[6] -> Aperte para \"Raiz quadrada\".");
    puts("\t\t\t\t\t[7] -> Aperte para \"Fatorial de um n�mero\".");
    puts("");
    escrever("fm");
    /*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Obt�m as dimens�es do console
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    // Calcula as coordenadas para o meio da tela
    int centerX = consoleWidth / 2;
    int centerY = consoleHeight / 2;

    // Define a posi��o do cursor
    COORD cursorPos;
    cursorPos.X = centerX;
    cursorPos.Y = centerY;
    SetConsoleCursorPosition(hConsole, cursorPos);*/
    puts("\n");
    puts("\t\t\t\t\t\tOp��o desejada: ");
    printf("\t\t\t\t\t\t  ---> ");
    scanf("%d",&op);
    puts("\n");

    switch(op){
    case 1:
        voltar("Soma");
        escrever("sp");
        printf("Qual o primeiro n�mero?\n _ + _ = _\n---> ");
        scanf("%lf",&num1);
        printf("Qual o segundo n�mero?\n %.2lf + _ = _\n---> ",num1);
        scanf("%lf",&num2);
        printf("O resultado �: %.2lf + %.2lf = %.2lf\n",num1,num2,somar(num1,num2));
        escrever("fms");
        break;
    case 2:
        voltar("Subtra��o");
        escrever("sp");
        printf("Qual o primeiro n�mero?\n _ - _ = _\n---> ");
        scanf("%lf",&num1);
        printf("Qual o segundo n�mero?\n %.2lf - _ = _\n---> ",num1);
        scanf("%lf",&num2);
        printf("O resultado �: %.2lf - %.2lf = %.2lf\n",num1,num2,subtrair(num1,num2));
        escrever("fms");
        break;
    case 3:
        voltar("Multiplica��o");
        escrever("sp");
        printf("Qual o primeiro n�mero?\n _ X _ = _\n---> ");
        scanf("%lf",&num1);
        printf("Qual o segundo n�mero?\n %.2lf X _ = _\n---> ",num1);
        scanf("%lf",&num2);
        printf("O resultado �: %.2lf X %.2lf = %.2lf\n",num1,num2,multiplicar(num1,num2));
        escrever("fms");
        break;
    case 4:
        voltar("Divis�o");
        escrever("sp");
        printf("Qual o primeiro n�mero?\n _ / _ = _\n---> ");
        scanf("%lf",&num1);
        printf("Qual o segundo n�mero?\n %.2lf / _ = _\n---> ",num1);
        scanf("%lf",&num2);
        printf("O resultado �: %.2lf / %.2lf = %.2lf\n",num1,num2,dividir(num1,num2));
        escrever("fms");
        break;
    case 5:
        voltar("Exponencia��o");
        escrever("sp");
        printf("Qual � a base?\n _ ^ _ = _\n---> ");
        scanf("%lf",&num1);
        printf("Qual � o expoente?\n %.2lf ^ _ = _\n---> ",num1);
        scanf("%lf",&num2);
        printf("O resultado �: %.2lf ^ %.2lf = %.2lf\n",num1,num2,elevar(num1,num2));
        escrever("fms");
        break;
    case 7:
        voltar("Fatora��o");
        escrever("sp");
        puts("A partir de qual n�mero dever� ser feito o fatorial\n_! = _");
        scanf("%lf", &num1);
        printf("O resultado �: ");
        printf("%.2lf\n",fatorar(num1));
        escrever("fms");
        break;
    default:
        contagem(5);
        main();
    }
}
void escrever(char operacao[]){
    if(operacao == "mn"){
        puts("\t|=====================================CALCULADORA=====================================|");
        puts("\t\t|=================================Menu=================================|");
    }
    else if(operacao == "fms"){
        puts("|=====================================================================================|");
    }else if(operacao == "sp"){
        puts("|=====================================CALCULADORA=====================================|");
    }else if(operacao == "fm"){
        puts("\t|=====================================================================================|");
    }
}
void voltar(char texto[]){
    int volt=0;
    system("cls");
    escrever("sp");
    printf("Voc� escolheu \"%s\".\n",texto);
    puts("Deseja voltar ao menu?\n[1]->SIM\n[2]->N�O");
    scanf("%d",&volt);
    if(volt==1){
        system("cls");
        main();
    }else if(volt==2){
        system("cls");
    }else{
        contagem(5);
        main();
    }
}
void contagem(int sec){
    while (sec >= 0) {
        system("cls");
        puts("Op��o inv�lida!");
        printf("Em %d segundos voc� ir� retornar ao menu\n", sec);
        sleep(1);
        sec--;
    }
    system("cls");
}
double somar(double n1, double n2){
    return n1+n2;
}
double subtrair(double n1,double n2){
    return n1-n2;
}
double multiplicar(double n1,double n2){
    return n1*n2;
}
double dividir(double n1,double n2){
    double resto,aux;
    resto=aux=0.0;
    aux = n1/n2;
    aux = floor(aux);
    resto = n1 - aux * n2;
    printf("O resto desta divis�o �: %.2lf\n",resto);
    return n1/n2;
}
double elevar(double base,double expo){
    double resu=1;
    for(int i = 0; i<expo;i++ ){
        resu = resu*base;
    }
    return resu;
}
double fatorar(double i){
    if(i < 1) return 1;
    else{
        if(i > 0 && i < 2) printf("%.2lf=",i);
        else printf("%.2lf!",i);
        return i * fatorar(i-1);
    }
}
