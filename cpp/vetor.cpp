#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	float nota[4],soma;
	int i;
	for (i=0; i<4; i++){
		cout<<"aqui: ";
		cin>>nota[i];
		soma=soma+nota[i];	
	}
	float media,nwMe;
	int nwSo;
	media=soma/4;
	if(media<6 and media>=4){
		cout<<"\nRecuperação!\n";
		cout<<"Digite a nota nova: ";
		cin>>nwSo;
		nwMe=media+(nwSo/4);
		cout<<nwMe;
		if(nwMe>=6){
			cout<<"Aprovado";
		}else{
			cout<<"Reprovado";
		}
	}else if(media>=6){
		cout<<"Aprovado";
	}else if(media<6){
		cout<<"Reprovado";	
	}else{
		cout<<"ERRO";
	}
}