#include <iostream>
using namespace std;
int main(){
	//variáveis
	double temp;
	char unite;
	double nwTemp;
	
	cout<<"******************* Conversão de temperatura *******************"<<endl;
	cout<<"F = Fahrenheit"<<endl;
	cout<<"C = Celcius"<<endl;
	cout<< "Qual unidade você gostaria que fosse convertida?"<<endl;
	cout<<"Resposta: ";
	cin>>unite;
	switch(unite){
		case 'F':
			cout<<"Entre com a temperatura em Celcius"<<endl;
			cout<<"Resposta: ";
			cin>>temp;
			nwTemp = (1.80 * temp) + 32.0;
			cout<<nwTemp;
			break;
		case 'f':
			cout<<"Entre com a temperatura em Celcius"<<endl;
			cout<<"Resposta: ";
			cin>>temp;
			nwTemp = (1.8 * temp) + 32;
			cout<<nwTemp;
			break;
		case 'C':
			cout<<"Entre com a temperatura em Fahrenheit"<<endl;
			cout<<"Resposta: ";
			cin>>temp;
			nwTemp = (temp-32) / 1.8;
			cout<<nwTemp<<endl;
			break;
		case 'c':
			cout<<"Entre com a temperatura em Fahrenheit"<<endl;
			cout<<"Resposta: ";
			cin>>temp;
			nwTemp = (temp-32) / 1.8;
			cout<<nwTemp<<endl;
			break;
			default:
				cout<<"ERROR 001";
				break;
	}
	
	cout<<"****************************************************************";
	
	
	return 0;
}