#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int i,j;
void primQue(){
    int matriz[4][5];
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=0;
        }
    }
    for(i=0;i<4;i++){
            printf("[");
        for(j=0;j<5;j++){
            if(j<4){
                printf("%d,",matriz[i][j]);
            }else{
                 printf("%d",matriz[i][j]);
            }

        }
        printf("]");
        printf("\n");
    }
}
void segQue(){
    int matriz[4][5];
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            int k = i+1;
            int m = j+1;
            printf("Digite o %dº valor da linha %d \n",m,k);
            scanf("%d",&matriz[i][j]);
        }
    }
    system("cls");
    printf("Questão número dois:\n");
    for(i=0;i<4;i++){

            printf("[");
        for(j=0;j<5;j++){
            if(j<4){
                printf("%d,",matriz[i][j]);
            }else{
                 printf("%d",matriz[i][j]);
            }

        }
        printf("]");
        printf("\n");
    }
}
void tercQue(){
    int matriz[4][5];
    int soma_linha[4] = {0, 0, 0, 0};
    int soma_coluna[5] = {0, 0, 0, 0, 0};
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            soma_linha[i] += matriz[i][j];
            soma_coluna[j] += matriz[i][j];
        }
    }
    printf("Matriz:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma por linha:\n");
    for(i = 0; i < 4; i++) {
        printf("Linha %d: %d\n", i, soma_linha[i]);
    }
    printf("\nSoma por coluna:\n");
    for(j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j, soma_coluna[j]);
    }
}
int main(){
    int c;
    setlocale(LC_ALL,"Portuguese");
    printf("1 - Para primeira questão\n");
    printf("2 - Para segunda questão\n");
    printf("3 - Para terceira questão\n");
    printf("--> ");
    scanf("%d",&c);
    fflush(stdin);
    switch(c){
    case 1:
        system("cls");
        printf("Questão número um:\n");
        primQue();
        break;
    case 2:
        system("cls");
        printf("Questão número dois:\n");
        segQue();
        break;
    case 3:
        system("cls");
        printf("Questão número dois:\n");
        tercQue();
        break;
    default:
        printf("ERRO");
        break;
    }
}
