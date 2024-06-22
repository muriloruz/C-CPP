#include <stdio.h>
#include <stdlib.h>
int main(){

    int array[]={1,3,4,6,5,2};
    int *ptr1;
    int i;
    int j;
    int tam = sizeof(array)/sizeof(array[0]);
    for(i=0;i<tam-1;i++){
        for(j=0; j < tam - i - 1; j++){
            if(array[j]>array[j+1]){
                ptr1 = &array[j];
                array[j]=array[j+1];
                array[j+1] = *ptr1;
            }
        }
    }
    for(int k = 0; k < tam; k++)
   {
      printf("%d ", array[k]);
   }
}

