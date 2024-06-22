#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;
void segTurno(int candidato1,int candidato2){
    int resp;   
  do{
        system("cls");
        if(candidato1==1 and candidato2==2){
            printf("Digite [1]-Para João\n");
            printf("Digite [2]-Para Pedro\n");
            printf("Digite [4]-Para nulo\n");
            printf("Digite [5]-Para branco\n");
            printf("Digite [6]-Para sair\n");
            printf("O seu voto: ");
            scanf("%d",&resp);
            if(resp==1)    candidato1++;
            if(resp==2) candidato2++;
            if(resp==4) votoNulo++;
            if(resp==5) votoBranco++;
            if(resp==6) break;
        }else if(candidato1==2 and candidato2==3){
            printf("Digite [1]-Para João\n");
            printf("Digite [2]-Para Maria\n");
            printf("Digite [4]-Para nulo\n");
            printf("Digite [5]-Para branco\n");
            printf("Digite [6]-Para sair\n");
            printf("O seu voto: ");
            scanf("%d",&resp);
            if(resp==1)    candidato1++;
            if(resp==2) candidato2++;
            if(resp==4) votoNulo++;
            if(resp==5) votoBranco++;
            if(resp==6) break;
        }else if(candidato1==1 and candidato2==3){
            printf("Digite [1]-Para João\n");
            printf("Digite [2]-Para Maria\n");
            printf("Digite [4]-Para nulo\n");
            printf("Digite [5]-Para branco\n");
            printf("Digite [6]-Para sair\n");
            printf("O seu voto: ");
            scanf("%d",&resp);
            if(resp==1)    candidato1++;
            if(resp==2) candidato2++;
            if(resp==4) votoNulo++;
            if(resp==5) votoBranco++;
            if(resp==6) break;        
        }
    }while(true);
    printf("Finalizado!\n");
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int resp;
    int cand1=0;
    int cand2 = 0;
    int cand3 = 0;
    int branco = 0;
    int nulo = 0;
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
        if(resp==1)    cand1++;
        if(resp==2) cand2++;
        if(resp==3) cand3++;
        if(resp==4) nulo++;
        if(resp==5) branco++;
        if(resp==6) break;
    }while(true);
    if(cand1>cand2 and cand1>cand3 and cand1>nulo and cand1>branco) {
        printf("O vencedor foi o João com %d votos\n",cand1);
    		if(cand2>cand3 and cand1==cand2){
				segTurno(1,2);
			}else if(cand3>cand2 and cand3==cand2){
				segTurno(1,3);
			}else{
				printf("ERRO");
			}
	}else if(cand2>cand1 and cand2>cand3 and cand2>nulo and cand2>branco){
            printf("O vencedor foi o Pedro com %d votos\n",cand2);
            if(cand1>cand3 and cand1==cand2){
				segTurno(1,2);
		}else if(cand3>cand1 and cand3==cand2){
			segTurno(2,3);
		}else{
			printf("ERRO");
		}
    }else if(cand3>cand1 and cand3>cand2 and cand3>nulo and cand3>branco){
        printf("O vencedor foi a Maria com %d votos\n",cand3);
		if(cand2>cand1 and cand3==cand2){
			segTurno(2,3);
		}else{
			cout<<"ERRO";
		}   
    }
    printf("Finalizado!\n");
    printf("Teve um total de %d votos para João \n",cand1);
    printf("Teve um total de %d votos para Pedro \n",cand2);
    printf("Teve um total de %d votos para Maria \n",cand3);
    printf("Teve um total de %d votos nulos \n",nulo);
    printf("Teve um total de %d votos brancos \n",branco);
}