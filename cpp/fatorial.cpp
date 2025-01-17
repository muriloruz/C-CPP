/*
    Name: fatorial.cpp
    Author: Murilo Ruz Soares
    Description: Exemplo fatorial feito em aula
*/
#include <stdio.h>
#include <locale.h>
int fatorar(int);
int fatorial2(int);
int fat=1;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int x = 0;
    int fato=0;
    puts("Digite um valor maior que 1");
    scanf("%d", &x);
    printf("Fatorial do número %d! = ",x);
    fato = fatorar(x);
    printf("%d  \n", fato);
    puts("===============================================================");
    printf("%d",fatorial2(x));
}
int fatorar(int x){
    if(x==1){
      printf("%d = ",x);
      return 1;
    }
    printf("%d*",x);
    return fatorar(x-1)*x;
}
int fatorial2(int x){
	if(x == 1) return fat;
	fat = x * fatorial2(x-1);
	return fat;
}
