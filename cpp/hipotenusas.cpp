#include <iostream>
#include <cmath>
using namespace std;
void facil(int maior,int menor);
void dificil();
int main(){
	int decisao;
	int x;
	int y;
	cout<<"1 - Para facil"<<endl;
	cout<<"2 - Para dificil"<<endl;
	cin>>decisao;
	switch(decisao){
		case 1:
			cout<<"Digite o valor do maior cateto"<<endl;
			cin>>x;
			cout<<"Digite o valor do menor cateto"<<endl;
			cin>>y;
			facil(x,y);
			break;
		case 2:
			dificil();
			break;
	}
}
void facil(int maior,int menor){
		int hip;
		hip = hypot(maior,menor);
		cout<<hip;
}
void dificil(){
	double a;
	double b;
	double c;
	double d;
	cout<<"Qual o valor do maior cateto"<<endl;
	cin>>a;
	cout<<"Qual o valor do menor cateto"<<endl;
	cin>>b;
	c=pow(a,2)+pow(b,2);
	d=sqrt(c);
	cout<<(double)c<<" and "<<(double)d;
}