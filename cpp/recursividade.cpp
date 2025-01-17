/*
	Name: recursividade.cpp
	Author: Murilo
	Date: 30/08/23 11:44
	Description: Revisão de funçoes recursivas, recursividade direta e recursividade indireta
*/
#include <stdio.h>
#include <stdlib.h>
void imprimirDec(int);
void imprimirCre(int);
int fatorial(int);
void linha();
main(){
	int n;
	puts("Digite um valor para N, que seja maior que 0");
	scanf("%d", &n);
    if(n==0) puts("\"N = 0\"");
    else{
        imprimirDec(n);
        linha();
        imprimirCre(n);
        linha();
        printf("%d",fatorial(n));
    }
}
void linha(){
     puts("================================================================");
}
void imprimirDec(int n){
    //comece verificando se n eh igual a 0
    if(n==0) printf("%d\n",n);
    //a funcao ira simplesmente retornar o valor 0, e nao ira aplicar a recursividade
    else{
        printf("%d\n",n);
        int decremento = n-1;
        //apos pritar, crio a variavel x para fazer o decremento, perceba que poderia ser 
		//"imprimir(n-1)", porem optei assim
        imprimirDec(decremento);
        //invoco a funcao e mando como parametro a variavel decremento
    }
}
void imprimirCre(int n){
    if(n==0) printf("%d\n",n);
    else{
        imprimirCre(n-1);
        printf("%d\n",n);

    }
}
int fatorial(int x){
    if(x==0) return 1;
    else{
        return x*fatorial(x-1);
    }
}
