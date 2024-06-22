#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef int number_t;

void soma();
void mult();
void div();
void sub();

int main(){
	number_t dec;
	number_t y;
	cout<<"Digite \n [1]-Soma \n [2]-Subtração \n [3]-Multiplicação\n [4]-Divisão \n";
	cin>>dec;
	switch(dec){
		case 1:
			soma();
			break;
		case 2:
			sub();
			break;
		case 3:
			mult();
			break;
		case 4:
			div();
			break;
		default:
			cout<<"Error";
			break;
	}
}
void soma(){
	number_t conta;
	number_t cont,cont2;
	for(cont2=0;cont2<=10;cont2++){
		for(cont=0;cont<=10;cont++){
			conta=cont+cont2;
			cout<<"\n"<<cont<<"+"<<cont2<<"="<<conta<<"\n";
		}
		cout<<"================================================================ \n";
	}

}
void sub(){
	number_t conta;
	number_t cont,cont2;
	for(cont2=0;cont2<=10;cont2++){
		for(cont=0;cont<=10;cont++){
			conta=cont-cont2;
			cout<<cont<<"-"<<cont2<<"="<<conta<<"\n";
		}
		cout<<"================================================================ \n";
	}
	
}
void mult(){
	number_t conta;
	number_t cont,cont2;
	for(cont2=0;cont2<=10;cont2++){
		for(cont=0;cont<=10;cont++){
			conta=cont*cont2;
			cout<<cont<<"x"<<cont2<<"="<<conta<<"\n";
		}
		cout<<"================================================================ \n";
	}

}
void div(){
	float conta;
	number_t cont,cont2;
	for(cont2=1;cont2<=10;cont2++){
		for(cont=1;cont<=10;cont++){
			conta=cont/cont2;
			cout<<cont<<"/"<<cont2<<"="<<conta<<"\n";
		}
	cout<<"================================================================ \n";
	}

}