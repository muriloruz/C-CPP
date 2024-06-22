#include <stdio.h>
#include <stdlib.h>
int main(){
	int variavel;
	int *ponteiro;
	printf("Digite o valor do ponteiro: ");
	scanf("%d",&variavel);
	ponteiro = &variavel;
	printf("O VALOR DO PONTEIRO É: %d\n", *ponteiro);
}