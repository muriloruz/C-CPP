/*
    Nome: provaEstru1.c
    Author: Murilo
    Date: 19/10/2023 02:00
    Descricao: Exercicio dois da prova do xandao
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularP(int,int);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int b=0,e=0;
    puts("Qual o valor da base?");
    scanf("%d",&b);
    puts("Entre com o valor do expoente:");
    scanf("%d",&e);
    printf("O valor da potenciação é: %d",calcularP(b,e));
}
int calcularP(int base,int exp){
    if(exp==0) return 1;
    else{
      return base * calcularP(base,exp-1);
    }
}
