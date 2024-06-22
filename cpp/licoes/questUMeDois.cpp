#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;
typedef int number_t;
typedef float numQue_t;
typedef string text_t;
void questUm(){
	setlocale(LC_ALL,"Portuguese");
	numQue_t a,b,c;
	printf("Digite os número dos 3 lados: ");
	cin>>a>>b>>c;
	if(a==b and b==c){
		cout<<"triangulo equilátero";
	}else if(a==b or a==b or a==c){
		cout<<"Triangulo isóceles";
	}else{
		cout<<"Triangulo escaleno";
	}
}
void questDois(){
	number_t a,b;
	std::string resp;
	printf("Digite dois números: ");
	cin>>a>>b;
	resp += a%2==0 ? "O primeiro número eh par" : "O primeiro número eh impar";	
	resp += b%2==0 ? ", o segundo número eh par" : "O segundo número eh impar";
	
	resp += a>=0 ? ", o primeiro número eh positivo" : "O primeiro número eh negativo";	
	resp += b>=0 ? ", o segundo número eh positivo" : "O segundo número eh negativo";
	
	if(a==b){
		printf("Números iguais.\n");
	}
	cout<<resp;
}
int main(){
	int d;
	cout<<"Qual a atividade desejada?\n";
	cin>>d;
	switch(d){
		case 1:
			questUm();
			break;
		case 2:
			questDois();
			break;
	}
}