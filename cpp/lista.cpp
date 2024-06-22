/*
	Name: listaLigada.cpp
	Author: Luciano
	Date: 11/10/23 09:59
	Description: Programa para demonstrar as listas ligadas
*/
#include<stdio.h>
#include<malloc.h>


struct Pessoa
{
	char nome;
	int idade;
	float altura;
    struct Pessoa *proximo;
};

//Variaveis globais
Pessoa *head = NULL;
Pessoa *current = NULL;
Pessoa *tail = NULL;

//Prototipação

//Criar lista na memoria
Pessoa *criarLista(char,int,float);

//Adicionar elemento ao fim da lista
Pessoa *adicionarNaLista(char,int,float);

//Exibir a lista
void exibirLista();

//Pesquisar um elemento na lista
Pessoa *pesquisarLista(char);

// Tamanho da lista
int tamanhoLista();


int main()
{
	adicionarNaLista('L',3,1.32);
	adicionarNaLista('a',5,1.45);
	adicionarNaLista('c',9,1.65);
	adicionarNaLista('d',43,1.70);
	Pessoa *pesquisa = pesquisarLista('d');
	if(pesquisa!=NULL)
		printf("\nElemento pesquisado - Nome: %c | Idade: %d | Altura: %.2f", pesquisa->nome, pesquisa->idade, pesquisa->altura);
	else
		puts("Elemento nao encontrado");

	exibirLista();
	printf("\nTamanho da lista: %d", tamanhoLista());
}


Pessoa *criarLista(char nome, int idade, float altura)
{
	Pessoa *p = (Pessoa*)malloc(sizeof(Pessoa));
	if(p == NULL)
	{
		puts("Falha ao alocar memoria");
		return NULL;
	}
	p->nome = nome;
	p->idade = idade;
	p->altura = altura;
	p->proximo = NULL;
	head = tail = p;
	return p;
}


Pessoa *adicionarNaLista(char nome, int idade,float altura)
{
	if(head == NULL)
		return criarLista(nome,idade,altura);
	Pessoa *p = (Pessoa*)malloc(sizeof(Pessoa));
	p->nome = nome;
	p->idade = idade;
	p->altura = altura;
	p->proximo = NULL;
	tail->proximo = p;
	tail = p;
	return p;
}


void exibirLista()
{
	current = head;
	int i = 1;
	while(current!=NULL)
	{
		printf("\nElemento na posicao %d - Nome: %c | Idade: %d | Altura: %.2f", i, current->nome, current->idade, current->altura);
		i++;
		current = current->proximo;
	}
}


Pessoa *pesquisarLista(char nome)
{
	if(tamanhoLista()==0)
		return NULL;
	current = head;
	while(current!=NULL)
	{
		if(current->nome==nome)
			return current;
		current = current->proximo;
	}
	return NULL;
}


int tamanhoLista()
{
	current = head;
	int i = 0;
	while(current!=NULL)
	{
		current = current->proximo;
		i++;
	}
	return i;
}
