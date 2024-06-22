#include <iostream>
using namespace std;
using pala = string;
using number_t = int;
int main(){
	pala name,rename;
	number_t letra;
	cout<<"Qua o seu nome?"<<endl;
	getline(cin,name);
	cout<<"O tamanho do seu nome, contando os espaços, eh "<<name.length()<<"."<<endl;
	if(name.empty())
		cout<<"Ta vazio."<<endl;
	else{
		cout<<"Tem coisa dentro da variavel."<<endl;
	}
	system("pause");
	system("cls");
	name.clear();
	cout<<"Depois da função 'cler' a variável fica vazia"<<endl;
	system("pause");
	if(name.empty())
		cout<<"Agora tá vazio."<<endl;
	else{
		cout<<"Ainda tem coisa dentro da variavel."<<endl;
	}
	cout<<"Digite o nome a ser colocado na variavel novamente"<<endl;
	getline(cin,rename);
	name.append(rename);
	cout<<"O novo valor da variável é "<<name<<endl;
	cout<<"Digite qual a letra vai aparecer, em numeros, da variável 'name'"<<endl;
	cin>>letra;
	while(true){
		if(name.length()<letra){
			cout<<"A variavel 'name' tem menos de "<<letra<<" letras e espaços"<<endl;
		}else{
			cout<<"A letra correspondente é a letra "<<name.at(letra)<<endl;
			break;
		}
	}
}