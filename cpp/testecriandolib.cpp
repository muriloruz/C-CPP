#include <stdio.h>
#include <stdlib.h>
#include "murilo.h"
void ordenar(int[],int);
int main(){
	int n,i,k;
	n,i=0;
	puts("Digite o tamanho do array:");
	printf("-->");
	scanf("%d",&n);
	int array[5];
	k=i++;
	for(i=0;i<n;i++){
		k++;
		printf("Digite o elemento numero %d  do array \n --> ",k);
		scanf("%d",&array[i]);
	}
	ordenar(array,n);
	printar(array,n);
}
void ordenar(int vetor[],int tam){
	int i,j,temp;
	i=j=temp=0;
	for(i = 0; i<tam-1;i++){
		for(j=0;j<tam;j++){
			if(vetor[j]>vetor[j+1]){
				temp = vetor[j];
				vetor[j+1] = vetor[j];
				vetor[j] = vetor[j+1];
			}
		}
	}
}