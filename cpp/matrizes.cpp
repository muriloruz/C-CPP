#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int matriz[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"entre com os numeros\n";
			cin>>matriz[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}