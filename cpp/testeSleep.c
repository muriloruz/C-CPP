#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

float num1=0;
float num2=0;
int escolha=0;
int voltar=0;
int sec=5;

float adicao(float num1, float num2){
	return num1 + num2;
}
float subtracao(float num1,float num2){
	return num1 - num2;
}
float multiplicacao(float num1, float num2){
	return num1 * num2;
}
float divisao(float num1,float num2){
	return num1 / num2;
}
float porcentagem(float num1,float num2){
	return (num1 / 100) * num2;
}
void contagem();
main(){
    setlocale(LC_ALL,"Portuguese");
	puts("Digite um numero para escolher a operacao!");
	puts("1 Adicao");
	puts("2 Subtracao");
	puts("3 Multiplicacao");
	puts("4 Divisao");
	puts("5 Porcentagem");
	scanf("%d", &escolha);

	switch(escolha){

		case 1:
			system("cls");
			puts("Voce escolheu adi��o");
			puts("Deseja voltar?\n 1 -> Para n�o\n 2 -> Para sim");
			scanf("%d", &voltar);

				if(voltar == 1){
				system("cls");
				return main();
				break;
			}
					else if(voltar == 2){
					system("cls");
					puts("Digite o primero valor");
					scanf("%f",&num1);
					puts("Digite o segundo valor");
					scanf("%f",&num2);
					printf("O resultado eh: %2.f",adicao(num1,num2));
					break;
			}
					else{

					puts("Op��o invalida");
					contagem();
                    system("cls");
                    return main();
					break;
                }

		case 2:
			system("cls");
			puts("Voce escolheu subtra��o");
			puts("Deseja voltar?\n 1 -> Para n�o\n 2 -> Para sim");
			scanf("%d", &voltar);

				if(voltar == 1){
				system("cls");
				return main();
				break;
			}
					else if(voltar == 2){
					system("cls");
					puts("Digite o primero valor");
					scanf("%f",&num1);
					puts("Digite o segundo valor");
					scanf("%f",&num2);
					printf("O resultado eh: %2.f",subtracao(num1,num2));
					break;
			}
					else{

					puts("Op��o invalida");
					contagem();
                    system("cls");
                    return main();
					break;
                }
		case 3:
			system("cls");
			puts("Voce escolheu multiplica��o");
			puts("Deseja voltar?\n 1 -> Para n�o\n 2 -> Para sim");
			scanf("%d", &voltar);

				if(voltar == 1){
				system("cls");
				return main();
				break;
			}
					else if(voltar == 2){
					system("cls");
					puts("Digite o primero valor");
					scanf("%f",&num1);
					puts("Digite o segundo valor");
					scanf("%f",&num2);
					printf("O resultado eh: %2.f",multiplicacao(num1,num2));
					break;
			}
					else{

					puts("Op��o invalida");
					contagem();
                    system("cls");
                    return main();
					break;
                }

		case 4:
			system("cls");
			puts("Voce escolheu divis�o");
			puts("Deseja voltar?\n 1 -> Para n�o\n 2 -> Para sim");
			scanf("%d", &voltar);

				if(voltar == 1){
				system("cls");
				return main();
				break;
			}
					else if(voltar == 2){
					system("cls");
					puts("Digite o primero valor");
					scanf("%f",&num1);
					puts("Digite o segundo valor");
					scanf("%f",&num2);
					printf("O resultado eh: %2.f",divisao(num1,num2));
					break;
			}
					else{

					puts("Op��o invalida");
					contagem();
                    system("cls");
                    return main();
					break;
                }

		case 5:
			system("cls");
			puts("Voce escolheu porcentagem");
			puts("Deseja voltar?\n 1 -> Para n�o\n 2 -> Para sim");
			scanf("%d", &voltar);

				if(voltar == 1){
				system("cls");
				return main();
				break;
			}
					else if(voltar == 2){
					system("cls");
					puts("Digite o primero valor");
					scanf("%f",&num1);
					puts("Digite o segundo valor");
					scanf("%f",&num2);
					printf("O resultado �: %2.f",multiplicacao(num1,num2));
					break;
			}
					else{

					puts("Op��o inv�lida");
					contagem();
                    system("cls");
                    return main();
					break;
                }

		default:
		    system("cls");
            puts("Valor inv�lido!");
            main();

	}

}
void contagem(){
    while (sec >= 0) {
        system("cls");
        printf("Em %d segundos voc� ir� retornar ao menu\n", sec);
        sleep(1);
        sec--;
    }
}
