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
        printf("Maior � %.2f\n", max);
        printf("Menor � %.2f", menor);
    }else if(max==menor){
         printf("Maior n�mero(%.2f) � igual ao menor n�mero(%.2f)\n", max , menor);
    }else{
        printf("ERRO");
    }
}
