#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int v[10];
	int i;
	for (i=0;i<10;i++){
		v[i] = rand()%30;
		printf("%d\n",v[i]);
	}	
		
}