#include <stdio.h>
#include <stdlib.h>
int main(){
	int *j,**c,***d,w=2;
	j = &w;
	c = &j;
	d = &c;
	printf("%d %d %d",2**j,3***c,4****d);
}