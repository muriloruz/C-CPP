#include <stdio.h>
#include <stdlib.h>

int fatorar(int);

main(){
    printf("%d",fatorar(5));

}

int fatorar(int n){
    if(n==0) return 1;
    else{
        if(n!=1) printf("%d*",n);
        else printf("%d=",n);
        return n*fatorar(n-1);
    }
}
