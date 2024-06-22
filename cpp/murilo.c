#include <stdio.h>
#include <stdlib.h>
double elevado(double base,double expo){
	if(expo==0) puts("1");
	else if(expo>0){
		int i;
		double result=base;
		for(i=0;i<expo-1;i++){
			result = result* base;
		}
		return result;
	}
	else puts("ERRO");
}
