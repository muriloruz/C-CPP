#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float max, menor, num;
    int i;
    max = -1000000, menor = 100000000;
    while(i<10){
        i++;
        printf("Digita\n--->  ");
        scanf("%f",&num);
        if(num>max) max=num;
        if(menor>num) menor = num;
    }
    if(max!=menor){
        printf("Maior é %.2f\n", max);
        printf("Menor é %.2f", menor);
    }else if(max==menor){
         printf("Maior número(%.2f) é igual ao menor número(%.2f)\n", max , menor);
    }else{
        printf("ERRO");
    }
}
