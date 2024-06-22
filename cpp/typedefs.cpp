#include <iostream>
using namespace std;
//para renomear um tipo de variavel, pode-se usar o using ou typedef
typedef string text_t;
using str_t = string;
int main(){
	str_t y = " toyota";
	text_t x = "carro";
	cout<<x<<y;
}