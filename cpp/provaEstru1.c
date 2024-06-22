/*
    Nome: provaEstru1.c
    Author: Murilo
    Date: 19/10/2023 01:27
    Description: Exercicio um da prova do xandao
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int receber();
void verificar();

int n=0;

main(){
    setlocale(LC_ALL,"Portuguese");
    receber();
    verificar();
}
int receber(){
    puts("Digite um número impar ou par");
    scanf("%d", &n);
    return n;
}
void verificar(){
    if(n%2==0) printf("O número %d é par",n);
    else printf("O número %d é impar", n);
}
