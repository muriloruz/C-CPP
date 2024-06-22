#include <iostream>
using namespace std;
int main(){
	string name;
	string tamanho;
	cout<<"Digita ai";
	getline(cin, name);
	tamanho = name.length();
	tamanho < 12 ? cout<<"Seu nome nao pode ter mais  de 12 caracteres" : cout<<"Ta sussa"; 		
}