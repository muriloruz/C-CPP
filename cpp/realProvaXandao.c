#include <stdio.h>
#include <stdlib.h>

int contar(int);

int ult=0;

main(){
    int n;
    puts("Digite o primeiro n�mero:");
    scanf("%d",&n);
    puts("Digite o n�mero limite:");
    scanf("%d",&ult);
    contar(n);
}

int contar(int prim){
    if(prim==ult-1) return 1;
    else{
        printf("%d\n",prim);
        return contar(prim-1);
    }
}
