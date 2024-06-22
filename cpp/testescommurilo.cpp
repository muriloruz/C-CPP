#include <stdio.h>
#include "murilo.h"
#include <math.h>
main(){
	double resuDel,a,b,c;
	resuDel=a=b=c=0.0;
	puts("Entre com o valor de A");
	printf("-->");
	scanf("%lf",&a);
	puts("Entre com o valor de B");
	printf("-->");
	scanf("%lf",&b);
	puts("Entre com o valor de C");
	printf("-->");
	scanf("%lf",&c);
	printf("O delta é %.2lf\n",calcularDelta(a,b,c));
	printf("O baskhara linha 1 é %.1lf\n",calcularBhaskaMais(a,b,c));
	printf("O baskhara linha 2 é %.1lf",calcularBhaskaMenos(a,b,c));
}