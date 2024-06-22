#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double elevar(double base,double expo){
	int i = 0;
	double resu = base;
	if(expo==0) return 1.0; 
	else{
		for(i=0;i<expo-1;i++){
			resu *= base;
		}
		return resu;
	}
}
void printarArray(int *vetor, int tamanho){
	int i=0;
	for(i=0;i<tamanho;i++)
		printf("%d\t",vetor[i]);
}
double calcularDelta(double a, double b, double c){
	double resuDel = 0.0;
	double provi = ((b*b) - 4*a*c);
	return provi;
}
double calcularBhaskaMais(double a, double b, double c){
	double delta = sqrt(calcularDelta(a,b,c));
	return (-(b)+delta)/2*a;
}
double calcularBhaskaMenos(double a, double b, double c){
	double delta = sqrt(calcularDelta(a,b,c));
	return (-(b)-delta)/2*a;
}