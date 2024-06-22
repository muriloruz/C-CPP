#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int resp;
	int cand1=0;
	int cand2 = 0;
	int cand3 = 0;
	int branco = 0;
	int nulo = 0;
	int nvNulo=0;
	int nvBranco=0;
	int cd1=0;
	int cd2=0;
	system("color 0c");
	do{
		system("cls");
		printf("Digite [1]-Para João\n");
		printf("Digite [2]-Para Pedro\n");
		printf("Digite [3]-Para Maria\n");
		printf("Digite [4]-Para nulo\n");
		printf("Digite [5]-Para branco\n");
		printf("Digite [6]-Para sair\n");
		printf("O seu voto: ");
		scanf("%d",&resp);
		if(resp==1) cand1++;
		if(resp==2) cand2++;
		if(resp==3) cand3++;
		if(resp==4) nulo++;
		if(resp==5) branco++;
		if(resp==6) break;	
	}while(true);
	if(nulo>cand1 and nulo>cand2 and nulo>cand3){
		printf("Teve um total de %d votos para João \n",cand1);
		printf("Teve um total de %d votos para Maria \n",cand2);
		printf("Teve um total de %d votos para João \n",cand3);
		printf("Teve um total de %d votos em nulo \n",nulo);
		printf("Teve um total de %d votos em branco \n",branco);
	}else if(branco>cand1 and branco>cand2 and branco>cand3){
		printf("Teve um total de %d votos para João \n",cand1);
		printf("Teve um total de %d votos para Maria \n",cand2);
		printf("Teve um total de %d votos para João \n",cand3);
		printf("Teve um total de %d votos em nulo \n",nulo);
		printf("Teve um total de %d votos em branco \n",branco);
	}
	else if(cand1==cand2 and cand1>cand3){
		do{
			system("cls");
			printf("Segundo turno!\n");
			printf("Digite [1]-Para João\n");
			printf("Digite [2]-Para Pedro\n");
			printf("Digite [3]-Para nulo\n");
			printf("Digite [4]-Para branco\n");		
			printf("Digite [6]-Para sair\n");
			printf("O seu voto: ");
			scanf("%d",&resp);
			if(resp==1) cd1++;
			if(resp==2) cd2++;
			if(resp==3) nvNulo++;
			if(resp==4) nvBranco++;
			if(resp==6) break;
		}while(true);
		printf("Teve um total de %d votos para João \n",cd1);
		printf("Teve um total de %d votos para Pedro \n",cd2);
	}
	else if(cand1==cand3 and cand1>cand2){
		do{
				system("cls");
				printf("Segundo turno!\n");
				printf("Digite [1]-Para João\n");
				printf("Digite [2]-Para Maria\n");
				printf("Digite [3]-Para nulo\n");
				printf("Digite [4]-Para branco\n");
				printf("Digite [6]-Para sair\n");
				printf("O seu voto: ");
				scanf("%d",&resp);
				if(resp==1) cd1++;
				if(resp==2) cd2++;
				if(resp==3) nvNulo++;
				if(resp==4) nvBranco++;
				if(resp==6) break;
			}while(true);
			printf("Teve um total de %d votos para João \n",cd1);
			printf("Teve um total de %d votos para Maria \n",cd2);
	}
	else if(cand2==cand3 and cand2>cand1){
		do{
			system("cls");
			printf("Segundo turno!\n");	
			printf("Digite [1]-Para Pedro\n");
			printf("Digite [2]-Para Maria\n");
			printf("Digite [3]-Para nulo\n");
			printf("Digite [4]-Para branco\n");
			printf("Digite [6]-Para sair\n");
			printf("O seu voto: ");
			scanf("%d",&resp);
			if(resp==1) cd1++;
			if(resp==2) cd2++;
			if(resp==3) nvNulo++;
			if(resp==4) nvBranco++;
			if(resp==6) break;
		}while(true);
		printf("Teve um total de %d votos para Pedro \n",cd1);
		printf("Teve um total de %d votos para Maria \n",cd2);
	}
	else if(cand1>cand2 and cand1>cand3) {
		printf("O vencedor foi o João com %d votos\n",cand1);
		if(cand2>cand3){
		do{
			system("cls");
			printf("Segundo turno!\n");
			printf("Digite [1]-Para João\n");
			printf("Digite [2]-Para Pedro\n");
			printf("Digite [3]-Para nulo\n");
			printf("Digite [4]-Para branco\n");		
			printf("Digite [6]-Para sair\n");
			printf("O seu voto: ");
			scanf("%d",&resp);
			if(resp==1) cd1++;
			if(resp==2) cd2++;
			if(resp==3) nvNulo++;
			if(resp==4) nvBranco++;
			if(resp==6) break;
		}while(true);
		printf("Teve um total de %d votos para João \n",cd1);
		printf("Teve um total de %d votos para Pedro \n",cd2);
		}else if(cand3>cand2){
			do{
				printf("Digite [1]-Para João\n");
				printf("Digite [2]-Para Maria\n");
				printf("Digite [3]-Para nulo\n");
				printf("Digite [4]-Para branco\n");
				printf("Digite [6]-Para sair\n");
				printf("O seu voto: ");
				scanf("%d",&resp);
				if(resp==1) cd1++;
				if(resp==2) cd2++;
				if(resp==3) nvNulo++;
				if(resp==4) nvBranco++;
				if(resp==6) break;
			}while(true);
			printf("Teve um total de %d votos para João \n",cd1);
			printf("Teve um total de %d votos para Maria \n",cd2);	
		}else{
			printf("ERRO");
		}	
	}
	else if(cand2>cand1 and cand2>cand3){
		printf("O vencedor foi o Pedro com %d votos\n",cand2);
		if(cand1>cand3){
			do{
				system("cls");
				printf("Segundo turno!\n");
				printf("Digite [1]-Para João\n");
				printf("Digite [2]-Para Maria\n");
				printf("Digite [3]-Para nulo\n");
				printf("Digite [4]-Para branco\n");
				printf("Digite [6]-Para sair\n");
				printf("O seu voto: ");
				scanf("%d",&resp);
				if(resp==1) cd1++;
				if(resp==2) cd2++;
				if(resp==3) nvNulo++;
				if(resp==4) nvBranco++;
				if(resp==6) break;
			}while(true);
			printf("Teve um total de %d votos para João \n",cd1);
			printf("Teve um total de %d votos para Maria \n",cd2);
		}else if(cand3>cand1){
		do{
			system("cls");
			printf("Segundo turno!\n");	
			printf("Digite [1]-Para Pedro\n");
			printf("Digite [2]-Para Maria\n");
			printf("Digite [3]-Para nulo\n");
			printf("Digite [4]-Para branco\n");
			printf("Digite [6]-Para sair\n");
			printf("O seu voto: ");
			scanf("%d",&resp);
			if(resp==1) cd1++;
			if(resp==2) cd2++;
			if(resp==3) nvNulo++;
			if(resp==4) nvBranco++;
			if(resp==6) break;
		}while(true);
		printf("Teve um total de %d votos para Pedro \n",cd1);
		printf("Teve um total de %d votos para Maria \n",cd2);
		}else{
			printf("ERRO");
		}
	}
	else if(cand3>cand1 and cand3>cand2){
		printf("O vencedor foi a Maria com %d votos\n",cand3);
		if(cand2>cand1){
		do{
			system("cls");
			printf("Segundo turno!\n");	
			printf("Digite [1]-Para Pedro\n");
			printf("Digite [2]-Para Maria\n");
			printf("Digite [3]-Para nulo\n");
			printf("Digite [4]-Para branco\n");
			printf("Digite [6]-Para sair\n");
			printf("O seu voto: ");
			scanf("%d",&resp);
			if(resp==1) cd1++;
			if(resp==2) cd2++;
			if(resp==3) nvNulo++;
			if(resp==4) nvBranco++;
			if(resp==6) break;
		}while(true);
		printf("Teve um total de %d votos para Pedro \n",cd1);
		printf("Teve um total de %d votos para Maria \n",cd2);
		}else{
			printf("ERRO");
		}
	}
	return 0;
}