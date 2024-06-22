#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x=3,y=4,z=3,m=-5,i=9,k=3.76,l=27;
	double minimo,maximo,elevado,positivador,raizQuadrada,arredondar,arredondarCima,arredondarBaixo;
	
	raizQuadrada = sqrt(i);
	maximo = max(x,y);
	minimo = min(x,y);
	elevado = pow(z,2);
	positivador = abs(5);
	arredondar = round(k);
	arredondarCima = ceil(k);
	arredondarBaixo = floor(k);
	double raizCubica = cbrt(l);
	double hipotenusa = hypot(x,y);//sim, isso funciona direito
	
	
	cout<<maximo<<" e "<<minimo<<endl;
	cout<<elevado<<" e "<<raizQuadrada<<endl;
	cout<<positivador<<" e "<<arredondar<<endl;
	cout<<arredondarCima<<" e "<<arredondarBaixo<<endl;
	cout<<raizCubica<<" e "<<hipotenusa<<endl;
	cout<<"Para mais informações, acessar: https://cplusplus.com/reference/cmath/";
}