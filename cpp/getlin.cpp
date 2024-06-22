#include <iostream>
using namespace std;
using str_t = string;
int main(){
	str_t name;
	//getline para strings com espaço
	getline(cin>>ws, name);
	cout<<name;
}