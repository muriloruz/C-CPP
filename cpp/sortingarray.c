#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i,o,j,tamanho;
    printf("Digite o tamanho do array\n");
    scanf("%d",&n);
    float array[n],swap;
    tamanho = sizeof(array)/sizeof(array[0]);
    for(o=0;o<n;o++){
        printf("Digite o %dº valor do array\n",o+1);
        scanf("%f",&array[i]);
    }
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho-1;j++){
        if(array[i]>array[j]){
            swap =  array[i];
            array[i] = array[j];
            array[j] = swap;
        }
        }
    }
    for(i=0;i<tamanho;i++) printf("%f \n",array[i]);
}
