#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1 > num2){
        for(i=num2;i<=num1;i++)
            printf("%d",i);
    }else if(num1 < num2){
        for(j=num2;j<=num1;i--)
            printf("%d",i);
    }
}
